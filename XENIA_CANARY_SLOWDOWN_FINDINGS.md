# Xenia-canary CAVE slowdown investigation — findings & transfer notes
(2026-10-19, diagnostic sessions on DFKBL 435A07DF, Mushihimesama 435A07E3, DFK 545A07D2)

Companion analysis for TRACKING.md iterations 21–26: the "D3D12 submission
throughput" class (iter-26) is verified, but with a different shape than the
~1000-draws-x-20µs hypothesis. Read this before touching the rexglue submit path.

---

## 1. The problem

DFKBL on xenia-canary: frame times quantize hard to 33ms (29 fps) in dense
sections, while the PCB dips to 45–60 swaps/s. Calm sections were borderline
(15–17ms of work inside a 16.7ms vblank), so any added cost tipped them over.
Same class of symptom in Mushihimesama and DFK.

## 2. Methodology (reusable)

### 2.1 Instrumentation

The stock canary profiler (`report` skill / `show_profiler` config) was inert
because `XE_OPTION_PROFILING` and `XE_OPTION_PROFILING_UI` default to 0 in
`src/xenia/base/profiling.h` and were never set by CMake. Both are now set as
PUBLIC defines on `xenia-base` in `src/xenia/base/CMakeLists.txt`, turning on
all `SCOPE_profile_*` usage and the overlay.

Gotchas learned:

- `show_profiler` and `gpu` cvars are consumed at startup (`xenia_main.cc`) —
  they must go in the **global** config, not the per-game one.
- Per-game configs only apply at title load.
- `MICROPROFILE_SCOPEI` scopes are cheap when the overlay is hidden: enter/leave
  are gated by one `nGroupMask & S.nActiveGroup` check (microprofile.h:1665),
  ~2–5ns each. With the overlay shown, the `gpu` group activates and adds more,
  plus UI drawer cost — do diagnostics with the overlay visible, play with it off.
- The overlay "Time/Average/Max/CallAvg/Count" columns truncate long names;
  treat them as triage only. For real attribution use the HTML dump (2.2).

### 2.2 The HTML dump pipeline (the workhorse)

1. Recreate the dip (expert play for this title), click **Dump** in the
   MicroProfile toolbar. Files land in `%HOMEDRIVE%%HOMEPATH%`
   ("microprofile-YYYYmmdd-HHMMSS.html"), 32<<n frames from the click.
   64–512 frames is a good size band (files 35–660MB here).
2. Decode with `scripts/microprofile_dump_decode.py <file.html>`:
   rebuilds per-timer total/self/calls per-thread from the per-frame
   `tt/ts/ti` arrays, splitting frames >25ms into a "dip" bucket and the rest
   into "calm". Stack continuity across frame boundaries is required (see
   comment header for the format quirks we solved).
3. Cross-check the decode against the `MakeTimer` aggregate block in the
   dump header (same numbers, covers only ~60 frames).

### 2.3 Instrumentation rounds used in xenia

Round 0 (screenshots): narrowed the dip to `ExecutePrimaryBuffer` and showed
the per-scope rows are unreliable (some registered scopes don't display rows).

Round 1 (added explicit-name scopes in `IssueDraw` in
`src/xenia/gpu/d3d12/d3d12_command_processor.cc`, unscoped
`XE_GPU_FINE_GRAINED_DRAW_SCOPES=1` in `src/xenia/gpu/gpu_flags.h:56`):
`D3D12IssueDrawTotal/PrimitiveProc/RTs/Pipeline/BindConst/Submit` — came back
**negative** for per-draw cost (~2.5–2.8µs/draw the whole time). This killed
the "~20µs/draw" hypothesis from screenshots alone.

Round 2 (dump decode): full attribution without another rebuild. This found
the real targets — do this first next time.

---

## 3. Evidence: pre-fix dip anatomy (the 33ms frames)

Decoded from microprofile-20261019-003620.html (506 frames, 237 dips,
~2250 draws/dip, wall ~34.0ms per dip frame). Per dip frame on the graphics
command thread ("GPU Commands"):

| region | ms/dip frame |
|---|---|
| **Idle** (un-instrumented wait, all of it *before* the first command chunk) | **13.2** |
| `ExecutePrimaryBuffer` top-level | 20.5 (~140 chunks × ~0.13ms) |
| ...chunk overhead self (OnPrimaryBufferEnd + EndSubmission machinery) | **8.7** |
| ...`DeferredCommandList::Execute` (one per chunk) | 3.1 (~22µs each) |
| ...`ExecuteIndirectBuffer` (packet loop self) | 0.36 total |
| ...`IssueDraw` (total) | 6.3 (~2.8µs/draw) |
| ...`WAIT_REG_MEM` polls | ~2.2–2.7 (~650/f × 3.2µs) |
| `CommandProcessor::Stall` (empty-ring spin) | 0.65 |
| `MakeCoherent` | 0.02 (dead) |

Key attribution results:

1. **Per-draw cost is small** (~2.5–3µs): image processing, RT/cache bind,
   pipeline configure, constant binding all sum to microseconds. Anything
   "optimize the draw call" was always going to fail.
2. **PM4 packet decode is small** (IndirectBuffer self 0.36ms/frame even with
   ~420 nested indirect-buffer calls/frame). Ring parsing is not the enemy.
3. **The chunk pump is the enemy**: every ~0.13ms "primary buffer" chunk ran
   `OnPrimaryBufferEnd()` → `PumpQueryResolves()` + `PumpPendingRetire()` +
   `EndSubmission(false)` → deferred list execute (~22µs), command-list
   reset/close, ExecuteCommandLists, fence signal, **then the pumps again
   inside EndSubmission** (they run TWICE per chunk), plus query/fence
   bookkeeping. ~140–190 of these per dip frame ≈ 8.7 + 3.1ms/f.
4. **The dips are guest-paced at heart**: 13.2ms/f of the 34ms was the
   command thread merely waiting for the guest to emit more commands (and
   zero idle after the last chunk). The PCB slowdown is CPU-side, and the
   best an emulator can do is not add to it.

## 4. The fix (one line)

```toml
# per-game config, e.g. config/435A07DF.config.toml
d3d12_submit_on_primary_buffer_end = false
```

Default is `true` (`d3d12_command_processor.cc:40`). It disables the
per-chunk `EndSubmission(false)` in `OnPrimaryBufferEnd()`
(d3d12_command_processor.cc:2605–2614, called from
`ExecutePrimaryBuffer` in pm4_command_processor_implement.h:1410 via the
worker loop in command_processor.cc:365–426). Submissions then close only at
swap / explicit await points (`AwaitQueryResolve` etc. still force a flush
where results are needed — correctness is not disturbed; WAIT_REG_MEM polls
that miss with `wait>=0x100` still sleep per `cvars::vsync`).

Validated A/B on DFKBL (Green and Red ships), Mushihimesama, DFK: stable
58fps where it used to hard-quantize to 29, quick self-recovery on expert-play
dips, correct visuals over long sessions on both ships. Calm sections now do
~1.8ms GPU work per 17ms frame.

## 5. Evidence: post-fix dip anatomy (the rare ~34ms frames)

| title (capture) | Stall (empty ring) | WAIT_REG_MEM | real GPU work | verdict |
|---|---|---|---|---|
| DFKBL red (061131) | 9.4 | 23.7 | ≈1 | pure guest pacing |
| Mushihimesama (062817) | 6.8 | 29.3 | ≈1–2 | pure guest pacing |
| DFK (064013) | 7.6 | 18.6 | ≈17 (~6940 draws/f × 2.4µs) | ~50% guest, ~50% draw density |

Interpretation:

- The real work is now the floor. What remains is the PCB-authentic component
  (the game throttling itself). The dumps' isolated 616–728ms frames are stage
  transitions/loads, not gameplay.
- DFK has a residual headroom lever: ~2.4µs/draw × ~7000 draws/frame. Halving
  per-draw CPU cost (batch primitive processing, bind/descriptor batching) is
  the iter-27-class project if we ever want DFK's dips to beat PCB — NOT
  required for parity.
- "Missing sprites" in the PCB's rare dips vs canary's brief 29fps at the same
  trigger: both are the same engine-level frame-refresh limitation, each
  environment manifests it per its own pacing.

## 6. Transfer to rexglue — what to check/implement

> **TRANSFER VALIDATED (2026-10-19).** Prediction §6.4 was the whole story:
> rexglue shipped the stock xenia knob `d3d12_submit_on_primary_buffer_end`
> (default `true`) and nobody had A/B'd it. Isolated rebuild (v0.10.0 +
> module-reload fixes only) reproduced the slowdown; the one-line toml fix
> cured it; the default is now `false` in the fork (f7d591f) and the main
> tree is rebuilt (TRACKING.md iter 27). Sections below kept for reference.

The rexglue GPU plugin (xenos) should mirror the following, since rexglue has
the same structure of "guest command stream → decode → submission".

1. **Find the per-chunk flush in rexglue-sdk's draw/command paths.**
   In xenia this was: per primary-buffer end → pump ×2 + EndSubmission
   (fence signal + ExecuteCommandLists + allocator reset/close + barriers).
   The rexglue analog would be anything executed per *ring chunk*, per
   *command buffer*, per *XE_SWAP or report poll*, or per *packet batch* that
   touches the real submit queue.
2. **Batch by frame, not by chunk.** Only end/submit at (a) present/swap
   boundaries or (b) points where a readback/fence explicitly needs results
   (xenia kept those: AwaitQueryResolve / query flushes). Never submit inside
   the packet decode loop "for latency" unless a blocking readback is imminent.
3. **Avoid double pumping.** xenia's OnPrimaryBufferEnd pumped first
   (PumpQueryResolves/PumpPendingRetire) and EndSubmission pumped the same
   two again. Whatever the analogous "process completed work" path is, do
   exactly one pass per submit boundary.
4. **Cheap knobs to verify before code**: if rexglue has the equivalent of a
   "submit on chunk end" toggle or per-buffer scheduling cvar, A/B it first —
   in xenia the entire class was one default-true knob.
5. **Correctness guard for batching**: batching must stop at a guest-visible
   sync point (xenia kept the flush at `AwaitQueryResolve`, and the
   WAIT_REG_MEM sleep/poll semantics were untouched). Same condition in
   rexglue: any guest-visible sync (report readback, query, semaphore, fence
   wait) must still flush before blocking, or results land one submit late.
6. **Prediction**: post-fix xenia shows the dip frames at ≈1ms of GPU-side
   real work (DFKBL, MH) to ≈17ms at ~7000 draws/f (DFK); everything else is
   guest pacing. A correctly batched rexglue should land the same way: dip
   sections bounded by the recompiled game's own command-production rate
   (TRACKING.md iter-21 verified 90→60→45 swaps/s in deep dips as the
   PCB-authentic goal), not by submission overhead.

### Verification checklist (rexglue A/B harness)

- RTSS frametime curves pre/post change, on the same expert-triggered dip.
- Instrument the analogous flush/submit path with scopes (rexglue has its own
  profiler hooks if it vendored microprofile; otherwise manual counters with
  QueryPerformanceCounter at submit boundaries are enough).
- One extra DUMP decode run pre/post using
  `scripts/microprofile_dump_decode.py` against rexglue's runtime if it emits
  compatible dumps; otherwise the dump step is xenia-only and rexglue relies on
  frametime + counters.
- Confirm no visual anomalies (late frame effects, flicker); expect none:
  mid-chunk flushes are not semantic boundaries in either engine.

---

## 7. Provenance

- xenia-canary tree: `I:\workspace\xenia-canary`
  - Stage 1 log rate-limiter commit: `b41c4428b` "[GPU] Rate-limit spammy
    error logging on the command processor thread" (`XELOGE_GPU`, per-opcode
    map; must live in backend .cc files).
  - Profiling defines: `src/xenia/base/CMakeLists.txt` (XE_OPTION_PROFILING=1,
    XE_OPTION_PROFILING_UI=1 on xenia-base).
  - Per-draw instrumentation (keep; idle cost ~1 masked check per scope):
    `src/xenia/gpu/d3d12/d3d12_command_processor.cc`, guarded by
    `XE_GPU_FINE_GRAINED_DRAW_SCOPES` (`src/xenia/gpu/gpu_flags.h:56`).
  - Global config knobs consumed at startup: `show_profiler`, `gpu`
    → `xenia-canary.config.toml`; GAME knobs → `config/435A07DF.config.toml`
    (`log_level = 0`, `log_mask = 8`, `d3d12_submit_on_primary_buffer_end
    = false`).
- Dump files analyzed (in `C:\Users\<user>\`):
  microprofile-20261019-003345/003401/003419/003545/003620 (pre-fix DFKBL),
  061127/061131/061135/061138 (post-fix DFKBL red-ship dips),
  062720/062722/062724/062814/062817 (Mushihimesama),
  064008/064010/064013 (DFK).
- Decoders/analysis scripts: the aggregate dump decoder is vendored here at
  `scripts/microprofile_dump_decode.py`; the per-frame top-level union/gap
  analysis used to locate the idle time (method summarized in sections 3
  and 5) was in session temp.
- Rexglue reference: `I:\workspace\rexglue-dfkbl\TRACKING.md`
  (iter-21 = PCB-authentic slowdown verified; iter-26 = "D3D12 submission
  throughput" — this document is the completion of that hypothesis)
  and `thirdparty/rexglue-sdk/` (pinned patched SDK).
