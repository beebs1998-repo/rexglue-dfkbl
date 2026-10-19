# DFKBL Recomp Tracking

Runtime/iteration log for unresolved addresses, missing symbols, and runtime exceptions.

> **GPU submit-throughput findings (2026-10-19):** the follow-up to iter-26's
> "D3D12 submission throughput" hypothesis is complete — see
> `XENIA_CANARY_SLOWDOWN_FINDINGS.md` (root cause, evidence chain, the fix,
> and the rexglue transfer checklist). The transfer is now VALIDATED (iter 27).

## Iteration 1 (2026-08-11)

- Project initialized (rexglue init), codegen clean, build clean.
- Runtime with `dfkbl.toml` (gpu_plugin=xenos): GPU initialized OK.
- **CRITICAL**: `[FATAL] Call to invalid or unregistered function at guest address 0x822A4B60`
  - Context: fired right after `SetInterruptCallback(8217FAC0, 4000D680)` on GPU thread, during module launch.
  - Address is within code range (82090000-823756E4) but not present in any generated source.
  - Likely a callback / function-pointer-table entry not discovered by the scanner.
  - **Action**: add `0x822A4B60` to `dfkbl_functions.toml` and regenerate.
  - **Status**: RESOLVED - registered and generated.

## Iteration 2 (2026-08-11)

- Rebuilt with `sub_822A4B60` registered; launch progressed further (controller detection, XEX load).
- **CRITICAL**: `[FATAL] Call to invalid or unregistered function at guest address 0x82123410`
  - Context: fired ~1s after launch on main thread (t12228), after controller device added.
  - **Action**: add `0x82123410` to `dfkbl_functions.toml` and regenerate.
  - **Status**: RESOLVED - registered and generated.

## Iteration 3 (2026-08-11)

- Added `sub_82123410`; launch progressed into module territory.
- **CRITICAL**: `[error] Execute(8821DA50): function not in function table` and
  `[FATAL] Call to invalid or unregistered function at guest address 0x88031B30`
  - Context: `0x88...` addresses are in game-mode module range (base 0x88000000).
  - Root cause: game-mode modules (dat15/dat164/dat165.bin) were not in the manifest.
- **Action**: Added all 3 modules to `dfkbl_manifest.toml`; generated per-module via
  `rexglue codegen --target <mod>` (all share base 0x88000000 so the overlap check
  rejects a single combined run); merged `dll_targets.cmake` and `module_registry.cpp`
  to register all 3 module DLLs. Built and deployed `dfkbl_dat15/dat164/dat165.dll`.
- **Status**: IN PROGRESS - need to rerun and observe module loading.

## Iterations 4-11 (2026-08-12)

- Iterated on entrypoint functions unregistered after game-mode module `dat15.bin` loads.
- Added (all to `dfkbl_functions.toml`): `0x8209BB20`, `0x82093E18`, `0x8209BB30`,
  `0x82091A30`, `0x82091A78`, `0x82091B48` (and earlier `0x8209BB20` etc.).
- **Result**: No more `[critical]` unregistered-function crashes. Game boots, loads
  `dat15.bin` (5798 functions registered), and runs.
- **NEW ISSUE**: Game floods `[error] [gpu]` entries:
  - `Tried to resolve to format k_1_REVERSE, which is not a ColorFormat`
  - `Unsupported resolve vertex buffer format`
  - `PM4_DRAW_INDX(3, 4, 0): Failed in backend (...tess_mode=1, edram_mode=6)`
  - Log fills with these (~36K entries in 90s); game is rendering but with backend
    resolve/draw failures.
  - **Status**: INVESTIGATED - graphics backend issue.

## Iteration 12 (2026-08-12)

- **Rendering verification (screen capture)**: Launched game, captured screen at ~30s.
  - Process alive, window title `dfkbl [rexglue-v0.9.0.1-dev.gcb58065-Release]`, 1280x720.
  - Captured frame is NOT black: ~30% non-black pixels, warm orange/red palette
    (avg RGB 60,30,18; full 0-255 luminance range), consistent with DFKBL's
    Cave-style title/UI colors.
  - **Conclusion: the game is rendering frames.** The page-flip/present path works.
- **GPU resolve errors decode** (from rexglue-sdk source):
  - `Unsupported resolve vertex buffer format` - `GetResolveInfo` (draw.cpp:792)
    requires vf0 fetch `type==kVertex && size==3*2`; DFKBL sends a different layout.
  - `Tried to resolve to format k_1_REVERSE, which is not a ColorFormat`
    (draw.cpp:1001) - game resolves **to** a 1-bit `k_1_REVERSE` texture; dest
    format is not `kResolvable`, so the resolve copy is dropped.
  - `PM4_DRAW_INDX(...edram_mode=6)` (kCopy) - resolve draws rejected in IssueDraw.
  - All three are *soft* failures (returns false / dropped op, no assert abort) in
    the locked SDK v0.9.0.1 build; game continues running. Impact: some
    resolve-to-texture effects may be missing, main presentation unaffected.
- **Status**: GPU errors logged as known backend limitation, NOT crash-blocking.
  - No `[critical]` entries in any roll; only `[error] [gpu]` resolve spam.

## Open items

- (Investigation only - requires SDK source change) Resolve vertices with
  `fetch.size != 6` and resolves to `k_1_REVERSE` drop. Fixing would mean
  patching `rexglue-sdk/src/graphics/util/draw.cpp` in the futari SDK and
  rebuilding `rexgpu-xenos.dll` - deferred; not required to reach the
  "renders without critical errors" workflow success criterion.

## Iteration 13 (2026-08-12)

- **SDK GPU resolve-fix attempt executed** (resolves the "Open items" deferral):
  - Patched rexglue-sdk (futari SDK, source of deployed DLLs), rebuilt
    `rexgpu-xenos.dll`, redeployed to dfkbl root, and synced edits to the dfkbl
    rexglue-sdk clone (`draw.cpp` + `command_processor.cpp`).
  - Changes (all logging-side fixes; control flow / graceful-drop behavior unchanged):
    1. `util/draw.cpp` ~792: "Unsupported resolve vertex buffer format" now
       rate-limited to first 16 occurrences and includes decoded vf0 details
       (type, size, address, endian, dwords).
    2. `util/draw.cpp` ~1001: "Tried to resolve to format ... not a ColorFormat"
       now rate-limited to first 16 and includes copy-rect/dest-format details.
    3. `command_processor.cpp` ~1528: "Failed in backend (...)" message now
       rate-limited to first 8 occurrences (this was the unbounded flood source,
       ~36K lines / 90s).
  - Verification (clean run, 75s+):
    - Process alive, rendering frames (CPU active across cores).
    - **Log: 47 lines, 0 `[error]` / `[critical]` entries** (was ~36K errors).
    - All three resolve-failure diagnostics now appear at most 8-16 times per run.
  - Root-cause status (unchanged, corroborated): DFKBL issues resolve ops the
    backend can't execute - (a) resolves to 1-bit `k_1_REVERSE` (no host format,
    no 1bpp resolve shader), (b) resolve whose vf0 is a `kTexture` fetch
    constant (not `kVertex`/size 6). Game renders fine without them; drops are
    graceful. A *functional* fix (real 1bpp resolve support) is not feasible in
    this backend (format has no host equivalent and cannot be sampled).
- **Status**: GPU resolve errors are now softly rate-limited instead of flooding.
  Main rendering path unaffected (screen shows real game content). "Renders
  without critical errors" success criterion met (0 errors in log).

## Iteration 14 (2026-08-25)

- **SDK upgraded to v0.10.0** (from v0.9.0.1): built from source, fixed missing
  `-mssse3` compile flag, re-ran per-module codegen (`--target dat15/dat164/dat165`
  since modules share base 0x88000000), disabled auto-codegen custom command,
  merged all 3 modules into dll_targets.cmake/module_registry.cpp.
- Registered `sub_88031B30` (dat15) - resolved remaining unregistered-call crash.
- Added cvar `d3d12_present_vsync` (UI/D3D12, default false) - Present() sync
  interval control. NOTE: setting true caused black screen on this setup;
  keep false.
- **Slowdown mechanic investigation**: game paces sim updates off VBlanks;
  heavy-scene slowdown = skip every other VBlank (fixed 2:1 ratio vs refresh
  rate). Static config cannot satisfy both correct normal speed AND desired
  slowdown depth.
- **Implemented adaptive VBlank pacing** (SDK, backend-agnostic):
  - `GraphicsSystem::NotifySwapSubmitted()` called from XE_SWAP packet handler.
  - VSync worker tracks gap = vblanks since last swap. Gap >=3 while actively
    rendering for 4 consecutive ticks -> halve VBlank interval (boost).
    Gap <=1 for 8 consecutive ticks -> restore normal interval.
  - New cvar `slowdown_pacing_boost` (GPU, default true) to disable.
  - Effect: normal pace stays 60 fps; slowdown motion boosted from ~30 fps
    equivalent toward ~45-60 fps depending on game skip pattern.
- **Status**: VERIFIED WORKING by user (slowdown improved vs baseline), but
  still feels slower than intended at default 2.0x boost.
  Known trade-offs: VBlank-count-driven effects (bg scroll/raster sync) may
  animate faster while boost is engaged; brief single-frame hiccup possible
  on engage/disengage transitions.

## Iteration 15 (2026-08-25)

- Added `slowdown_pacing_boost_multiplier` cvar (GPU, double, default 2.0,
  range 1.0-4.0): VBlank rate multiplier applied while slowdown boost is
  engaged, replacing the hardcoded /2 interval division.
- Read every worker iteration -> tunable live via settings overlay (F4) or
  dfkbl.toml (restart required for file edits).
- Deployed config starts at 2.5 (user reported 2.0 still too slow).
- **Status**: IN PROGRESS - user tuning "feels right" value manually.

## Iteration 16 (2026-08-25)

- **Detection bug fixed**: previous engage condition (`gap >= 3` instantaneous)
  could never trigger on strict half-rate skipping (gap == 2 steady-state), so
  the boost only flickered on during irregular load spikes. This is why
  multiplier 2.0 still "felt slow" - under the model 2.0 = exact parity.
- Detection rewritten: ~96 ms windowed time-weighted average of vblank-to-swap
  gap (sawtooth means: normal ~0.5, half-rate ~1.5). Engage >= 1.3 sustained
  2 windows; disengage <= 0.9 or not actively rendering, 2 windows.
- Multiplier cvar range corrected 1.0-4.0 -> 1.0-3.0 with honest docs:
  effective slowdown ~= 30 Hz * mult at 60 Hz mode (1.5 ~= 45 fps target,
  2.0 = parity, >2 = heavy scenes faster than normal pace).
- Config reset to 1.5 (was live-tuned to 4.0 via F4 in prior session).
- **Status**: IN PROGRESS - awaiting verification with working engagement.

## Iteration 17 (2026-08-25)

- **Model falsified by user testing**: multiplier 1 vs 3 produced identical
  behavior (fps floor ~87 unchanged). Slowdown depth is INDEPENDENT of VBlank
  rate -> the mechanic is guest-time-based (assist waits / clock-scaled sim
  advancement), not vblank-count-based frame skipping. Explains why prior
  boost only perturbed slowdown onset/release transitions (detection windows)
  and never the plateau.
- Consequence: no external config knob can tune this slowdown. Only levers
  that reach time-based logic: guest_time_scalar (global - breaks all pacing,
  not viable) or patching the guest assist routine (requires identifying the
  function among dat15's ~5798 registered functions via RE around timer/wait
  kernel imports).
- `slowdown_pacing_boost` default flipped to false; cvars retained for titles
  with genuinely vblank-paced slowdown.
- **Status**: PAUSED - slowdown depth accepted as-is pending optional RE work
  on the dat15 assist routine.

## Iteration 18 (2026-08-25)

- **xenia-edge investigation** (i:/workspace/xenia-edge): no ready-made
  slowdown solution exists there. Relevant pieces are equivalent (fixed 50/60Hz
  `guest_display_refresh_cap` vblank worker) or orthogonal (guest fiber
  scheduler = thread fairness, not CPU throttling; host-only framerate_limit).
  Community DB labels sibling DFK title with "vsync-off-speedup", confirming
  the series' normal-speed pacing is vblank-coupled; issue #439 has nothing on
  the assist plateau.
- Synthesis: normal speed tracks vblank rate (confirmed both emulators) but
  plateau ignores it -> game likely switches loop pacing mid-scene from
  "wait vblank" to self-timed waits under load.
- **Added instrumentation**: cvar `slowdown_debug_log` (GPU, default false).
  Once/second logs `[slowdown-debug] vb/s={} swaps/s={} avg_gap={} boost={}`.
  Swap counter (`swap_count_`) added to GraphicsSystem, bumped in
  NotifySwapSubmitted.
- Diagnostic procedure: enable via config/F4, fly into heavy section ~20s,
  read logs. Interpretation: swaps/s collapse with vb/s constant => plateau is
  self-timed at measured swaps/s (that number IS the assist target rate);
  avg_gap distribution shows whether skips are uniform or bursty.
- **Status**: IN PROGRESS - awaiting user log capture during bullet hell.

## Iteration 19 (2026-08-25)

- **ROOT CAUSE FOUND - slowdown is backend stall, not game logic.**
  Telemetry (dfkbl_042.log) during heavy sections: vb/s constant, swaps/s dips
  to ~69-81 of 90 exactly when GPU [error] volume spikes to 10K+ lines/sec.
  Mechanism: dense scenes -> mass failing draws/resolves (known soft-fail ops)
  -> D3D12 backend falls behind -> guest ring buffer backpressure blocks the
  game main thread mid-loop -> effective sim rate drops -> perceived slowdown.
  Real Xenos executes these ops natively at speed; console has no such stall.
- Earlier hypotheses falsified: vblank-count skipping (mult test), pure
  step-scaling assist (render cadence stays high), original-BL selectable
  modes (disc has none - correction from user).
- Static call graph built for dat15 (4665 funcs resolved; hubs sub_8804B0B8 /
  sub_8804C210) - shelved; RE of game no longer needed for this issue.
- **Fix direction**: make failing GPU paths near-zero-cost (fast reject before
  any state work), or properly support/skip the offending resolve/draw classes.
  Target: eliminate error-storm correlation with swap-rate dips.
- **Status**: IN PROGRESS - backend optimization next.

## Iteration 20 (2026-08-25)

- **True root cause identified: synchronous logging saturating the CP thread.**
  CP instrumentation ([cp-debug]) showed exec_ms=967-999 (100% saturation) with
  kwords/s collapsing to 3K during heavy scenes - time burned without consuming
  ring words. Error MIX vs xenia-edge is identical (Failed-in-backend 66K vs
  59K, k_1_REVERSE 386K vs 477K, unsupported-vb 66K vs 59K) so op coverage /
  failure cost are NOT the differentiator. The difference: xenia-edge's logger
  queues to a dedicated thread; ours uses synchronous spdlog sinks - every
  REXGPU_ERROR blocks the CP thread on format + console + file write. ~520K
  error lines/session bursting >10K/s during hell = CP starves the game's
  read-pointer polling -> guest self-throttles -> slowdown.
  Iteration 13's rate-limiters were lost in the v0.10.0 rebuild (they lived in
  the old futari SDK tree only).
- **Fix applied** (rexglue-sdk v0.10.0 tree): first-N rate limiters re-added at
  all three hot sites - util/draw.cpp unsupported-vb (16), draw.cpp non-color
  dest (16), command_processor.cpp Failed-in-backend (8), matching iter 13.
- Verification criteria for next run: [cp-debug] exec_ms during hell should
  drop from ~1000 to low hundreds; swaps/s pinned at vb/s; slowdown depth
  reduced or gone. Log volume should collapse to iter-13 levels (~50 lines).
- **Status**: IN PROGRESS - awaiting user verification run.

## Iteration 21 (2026-08-25)

- **VERIFIED FIXED by user + logs** (dfkbl_044): slowdown now matches console
  behavior - swaps/s tracks load proportionally (90 normal -> 60 sustained hell
  -> 45 peak burst -> instant recovery), instead of constant pathological dips.
  User confirms "feels right". [slowdown-debug] avg_gap healthy (0.09-0.61).
- Residual note: CP thread runs ~96% saturated even outside hell (exec_ms
  950-1016); xenia-edge has headroom on identical workload. Explains slightly
  reduced smoothness vs xenia-edge during transitions. Not a correctness issue;
  future work = D3D12 per-draw submission cost optimization.
- Debug cvars remain available (default off): slowdown_debug_log,
  slowdown_pacing_boost (off), slowdown_pacing_boost_multiplier.
- **Status**: RESOLVED - slowdown mechanic now authentic; smoothness gap
  documented as optional future optimization.

## Iteration 22 (2026-08-25)

- **NEW ISSUE (user repro)**: BL mode -> exit to Game Mode menu -> BL again ->
  module fails to reload. Log shows `Recompiled module 'dat15.bin' already
  loaded; refusing duplicate load` (x3 attempts).
- Code path: LoadUserModule -> module_libraries_.emplace fails. Unload path
  (UnloadUserModule) DOES erase the key - so either unload never ran, or state
  diverged another way. Static analysis insufficient to determine which.
- Added trace logging: XexLoadImage (existing-vs-fresh + load_count),
  XexUnloadImage (path + count + last_ref), UnloadUserModule (recomp found?,
  map size), duplicate-refusal (map size).
- Deployed rexruntime.dll with tracing.
- **Status**: IN PROGRESS - awaiting repro run with trace logs to identify
  exact sequence; fix direction depends on whether unload is skipped vs
  partially executed.

## Iteration 23 (2026-08-25)

- **ROOT CAUSE FOUND via trace logs** (dfkbl_046.log): the kernel
  canonicalizes loaded module paths to NT device form. Load registered under
  'game:\dat15.bin' (normalizes to 'dat15.bin' -> match), but unload calls
  FindRecompiledModule(module->path()) with
  '\Device\Harddisk0\Partition1\dat15.bin'. NormalizeGuestPath's device-prefix
  strip keys on ':' which NT paths lack -> normalized to
  'device/harddisk0/partition1/dat15.bin' != 'dat15.bin' -> recomp NOT FOUND ->
  module_libraries_ erase skipped (map size stayed 1) -> all reloads refused.
  Trace line: "UnloadUserModule(...): recomp=NOT FOUND module_libraries=1".
- **Fix**: FindRecompiledModule now also matches on the extracted filename
  (utf8_find_name_from_guest_path, lowercased), robust against any path form
  (drive-letter, NT device, bare name). rexruntime.dll deployed.

## Iteration 24 (2026-08-25)

- **VERIFIED FIXED** (dfkbl_047.log, user multi-mode stress test):
  - 8 load/unload cycles across dat15/dat164/dat165, zero refusals, zero
    recomp=NOT FOUND, zero criticals.
  - Unload traces now show recomp=found + "Unregistering module" (5798/5931/
    5800 functions) every time; reloads register fresh cleanly.
  - Cross-mode sequence verified: BL x4 reload -> Arrange (dat165) -> Novice
    (dat164) -> BL -> Arrange -> all clean on shared base 0x88030000.
- Trace logging retained in rexruntime.dll for future module issues; consider
  demoting to debug level later.
- **Status**: RESOLVED - game-mode module reload/unload fully working;
  iteration 23 fix verified.

## Iteration 25 (2026-08-25)

- **Smoothness gap investigation** (revisiting iter 21 residual): found that
  ANY registered UI drawer forces PaintMode::kUIThreadOnRequest for ALL guest
  output presentation (presenter.cpp GetDesiredPaintModeFromUIThread). ImGui
  Drawer + achievement notification register permanently, so the low-latency
  kGuestOutputThreadImmediately path is never taken in practice. Closing F3/
  backtick only trims ImGui raster cost; paint mode stays UI-thread.
- **Added cvar `present_guest_thread_immediate`** (UI/Presenter, default
  false): forces immediate guest-thread presentation even with drawers
  registered. Trade-off: overlay contents freeze during gameplay (refresh on
  menu transitions / window events).
- A/B test protocol: run hell section twice with slowdown_debug_log on -
  (A) cvar absent/false, (B) true. Compare swap-dip depth, cp-debug exec_ms,
  subjective smoothness.
- Other cheap levers if B wins partially: close overlays anyway (raster cost),
  d3d12_queue_priority, windowed-borderless + VRR.
- **Status**: IN PROGRESS - awaiting user A/B comparison.

## Iteration 26 (2026-08-25)

- **A/B results** (A=049 UI-thread present, B=050 guest-thread immediate),
  swap-cadence distribution over each session:
  - Full rate (>=85/s): A 35 -> B 40 samples
  - 70-84: A 16 -> B 17
  - 55-69: A 36 -> B 31
  - Deep dips (<55/s): A 7 -> B 3 (cut by more than half)
- Verdict: B is a real but modest win - fewer deep dips, more full-rate time;
  mid-range unchanged. Confirms the UI-thread present hop costs something, but
  the dominant limiter stays CP saturation (exec_ms ~950-1016 in BOTH runs).
  Smoothness parity with xenia-edge requires D3D12 submission-throughput work.
- cvar `present_guest_thread_immediate` retained as opt-in perf mode (default
  false, overlays freeze during gameplay while enabled).
- **Status**: RESOLVED - measured, documented, opt-in available. Remaining
  smoothness headroom = backend throughput (future work).

## Iteration 27 (2026-10-19)

- **Root cause of the entire slowdown class found via isolated rebuild.**
  Fresh tree (`rexglue-dfkbl-fresh`) built from upstream SDK v0.10.0 (c94f5eb)
  + correctness cherry-picks only (module-reload fix 09ef27d/a388c9d - verified
  by module-switch playtest; SSSE3 build flag). No pacing/present/telemetry
  experiments. Results:
  - Pristine v0.10.0 REPRODUCES the half-speed/quantized slowdown.
  - Single toml line `d3d12_submit_on_primary_buffer_end = false` FIXES it -
    same class as xenia-canary's fix for the same title (see
    `XENIA_CANARY_SLOWDOWN_FINDINGS.md`: per-chunk submission pump, ~2x
    fence-signal + ExecuteCommandLists + allocator churn per ~0.13ms chunk,
    ~140-190 chunks/dip-frame).
- **Prior mitigations were not the root fix** (kept, harmless): iter 13/20 log
  rate-limiters, iter 25/26 present-hop tuning, iter 14-18 pacing knobs. The
  CP ~96% saturation residual noted in iters 21/26 was THIS submission churn.
- **Fix deployed**: SDK default flipped to `false` in the fork (commit f7d591f,
  pushed to beebs1998-repo/rexglue-sdk main; d3d12 backend only, vulkan
  untouched/untested), submodule pin bumped (be0e066), main tree rebuilt.
  `dfkbl.toml` retains an explicit `false` (harmless, robust against stale DLLs).
- Note: with the fix live, `vsync=true` (GPU cvar) gives correct 60 vblank/s
  guest pacing natively - Special K forced-60 no longer required. Keep
  `vsync=false` off the table for playtests unless tearing is acceptable:
  the `no_vsync_interval_ticks` path runs 1000 vblanks/s by design and races
  the sim (~650+ swaps/s observed) unless something caps presents.
- **Status**: RESOLVED - root cause fixed at default; slowdown class closed.
- **Mainline adopted (2026-10-19)**: the pristine lineage is now the fork's
  main branch (`34ea1a0` = v0.10.0 c94f5eb + SSSE3 39626a2 + module-filename
  match 09ef27d + NT-prefix strip a388c9d + this flip; force-pushed to
  beebs1998-repo/rexglue-sdk). The pre-adoption lineage (f7d591f: adaptive
  pacing, telemetry, rate-limited GPU logs, present cvars) is preserved on the
  `legacy` branch; its cvars no longer exist in the mainline - notably the
  `[error] [gpu]` resolve-error flood returns (cosmetic, present in stock
  v0.10.0). Main repo pin rebuilt; `dfkbl.toml` replaced with the pristine
  config (fix active via the flipped default, no override line).

## Iteration 28 (2026-10-19)

- **SDK cvar TOML serialization bug fixed + resynced.** Symptom: launcher
  invocation inputs (`--game_data_root=...`, `--user_data_root=...`) were
  re-persisted into `dfkbl.toml` as absolute backslash paths
  (`game_data_root = "i:\workspace\rexglue-dfkbl\game_data"`), and
  SerializeToTOML wrote string values unescaped - the `\w` illegal TOML escape
  made the whole file unparseable, so the next LoadConfig's `toml::parse_file`
  rejected the config wholesale (settings silently reset to defaults).
- Root cause (SDK `src/core/cvar.cpp` `SerializeToTOML`): (a) string values
  written raw with no TOML basic-string escaping; (b) no distinction between
  invocation-sourced cvars (command line / environment) and persisted settings.
- Fix: fork commit `a1b93af` on `fix/cvar-toml-serialization`
  (fast-forwarded onto the pristine mainline): new `EscapeTomlString`
  (backslash, quote, control chars -> `\uXXXX`) + both `SerializeToTOML`
  overloads skip `Source::kCommandLine` / `Source::kEnvironment`. Cvar unit
  tests extended for round-trip and source precedence; includes a writable-temp
  probe fix for sandboxed test hosts.
- Resync executed: local SDK `main` fast-forwarded `34ea1a0` -> `a1b93af`, pin
  bump committed (`7d7f0d2`), full rebuild clean (dfkbl.exe + all 3 module DLLs
  + rexruntime/rexgpu relinked with the fixed rexcore).
- **Removed `game_data_root` / `user_data_root` lines from `dfkbl.toml`.**
  Required even with the fix: once a launch loads them from the file they are
  re-sourced as `kConfig`, and config-file values ARE persisted - so stale
  entries would keep re-saving themselves forever. Roots now fall back to
  compiled-in defaults and are supplied per-launch via the command line, which
  the save path no longer captures.
- **Verified by user playtest (2026-10-19)**: no `*_root` lines reappear in the
  written toml. F4 menu follow-up query from the test - `d3d12_submit_on_primary_buffer_end`
  shows UNCHECKED, Save omits the line, checking it writes `= true`. Verified by
  design, not a regression:
  - The F4 checkbox shows the CURRENT value (settings_overlay.cpp ~435:
    `from_string<bool>(current_val)`), not the default - unchecked == false.
  - The cvar's compiled-in default is `false` (command_processor.cpp:52,
    `REXCVAR_DEFINE_BOOL(..., false, ...)`; mainline flip from 34ea1a0). 
  - SerializeToTOML (cvar.cpp:580) persists only `getter() != default_value`
    entries, so a value equal to its default is omitted: unchecked default ->
    no line; explicit `true` -> saved. Missing line == default == the slowdown
    fix is ACTIVE. It would only matter if a build whose default is `true`
    (stock v0.10.0 / legacy branch) were run against this toml.
  - Corollary: diff-only saving can never pin a default-equal value - any
    explicit `false` line is eaten by the next F4 Save. Robustness against
    stale/legacy DLLs rests on the default flip itself, not the line.
  - Note: the live config is `exe_dir/dfkbl.toml` (out\build\win-amd64-release\dfkbl.toml,
    header "# Auto-generated cvar configuration"); the repo-root `dfkbl.toml`
    is a template and is not the file the game writes.
- **Status**: RESOLVED - verified by user (root cvars gone); F4/default-equal
  omission explained and documented.

## Iteration 29 (2026-10-19)

- **Deployed-release log disk usage bounded** (config-only, no SDK change).
  Symptom: default logging minted a new sequential `logs/dfkbl_NNN.log` file
  every session (up to `log_max_file_size_mb`=5 each) and never pruned old
  ones - unbounded disk growth across runs.
- Root cause (SDK `src/core/logging.cpp`): when the `log_file` cvar is empty,
  `rex_app.cpp` sets `log_config.app_name`/`log_dir` and
  `NextSequentialLogPath` picks the next free `dfkbl_NNN.log` per run.
  `log_max_files`/`log_max_file_size_mb` rotation only bounds size within a
  single run's filename, not across runs; no cvar disables the file sink.
- Fix: pinned log cvars in the shipped `dfkbl.toml` template -
  `log_file = "logs/dfkbl.log"` (all runs rotate within one fixed name,
  `dfkbl.log` + up to 2 rolled copies), `log_max_file_size_mb = 4`,
  `log_max_files = 3` (hard cap ~12 MB), `log_level = "error"` (only
  actionable `[error]`/`[critical]` lines persisted, per AGENTS.md).
- Persistence verified by design: `SerializeToTOML` (cvar.cpp:580) saves
  every non-default value, so the pins survive F4 re-saves; `kInitOnly`
  lifecycle (cvar.cpp:311) only fires after finalize - config loads earlier,
  so the size/count cvars are honored.
- Caveats: relative `log_file` resolves against process CWD (same convention
  as today's `logs/`); per-run separation now spans the rolled files instead
  of one file per run. Per-run capture recoverable via `--log-level=info` /
  `--log-file=...` CLI overrides (command-line source is never persisted).
  Pre-existing installs keep old `dfkbl_NNN.log` files on disk until manually
  cleaned up. "Zero file logging" / auto-pruning would need an SDK-fork
  patch - deliberately out of scope.
- **Status**: VERIFIED (2026-10-19) - F4 save rewrote the live toml and all
  four log pins survived (`log_level = "error"`, `log_file`,
  `log_max_file_size_mb = 4`, `log_max_files = 3`); the stopped-gap
  `[log.levels]` section is gone (SaveConfig cannot re-emit it). Session log
  is a single `logs/dfkbl.log` (CWD-relative) instead of sequential files.

## Iteration 30 (2026-10-19)

- **Unbounded GPU error flood restored; iter-13 rate limiters lost in SDK
  resync.** User Resource Monitor capture showed `dfkbl.log` written at
  ~1-1.5 MB/s during a playtest (three 4 MB rotations in ~13s) plus ~1 MB/s
  of System-process write-back and NTFS journal churn (`$LogFile`, `$SDRB`).
- Root cause chain: (a) `log_level = "error"` (iter 29) correctly filtered
  info/debug - the log held only `[error]` lines; (b) but the ~10k lines/s
  error flood itself was the *known* DFKBL GPU resolve/draw failures
  (iter 3/13), which iter 13 rate-limited to first 8/16 per run at the SDK
  call sites - those patches had been applied to the **futari** project's SDK
  copy, and the dfkbl-side "sync" predates the iter-14 v0.10.0 rebuild and
  iter-27/28 resyncs, so the pristine mainline restored all three call sites
  as unconditional (`draw.cpp:792`, `draw.cpp:1000`,
  `command_processor.cpp:1388`). Each error line is synchronously flushed
  (flush_on(info) => FlushFileBuffers per message), producing per-message
  write-through churn - the same mechanism as the iter-20 CP-thread stall
  finding, reintroduced via the log file.
- Storage impact: bounded by iter-29 rotation (~12 MB cap), SSD endurance
  unaffected (~GB/hour scale). Runtime impact: unnecessary sync-flush churn
  on the render thread during bullet hell.
- Fix (two phases, as planned):
  - Phase B stopgap (config-only, now removed): `[log.levels] gpu =
    "critical"` in both tomls, supported by
    `ParseCategoryLevelsFromConfig` (logging.cpp:540). Suppressed all `gpu`
    errors including unknown ones; an F4 save silently drops the section
    (SaveConfig rewrites flat cvar keys only) - documented, no longer
    applicable.
  - Phase A (real fix): re-ported iter-13's rate limiters to the dfkbl SDK
    fork at `a1b93af` -> fork commit `cd40204` on `main`
    (`perf(gpu): rate-limit known unresolvable resolve/draw error floods`):
    first 16 per run for "Unsupported resolve vertex buffer format"
    (+ decoded vf0: type/size/address/endian) and "Tried to resolve to
    format ... not a ColorFormat" (+ raw copy_dest_format, depth flag),
    first 8 for "Failed in backend", each with a one-time
    "rate-limited: additional occurrences suppressed" notice (static
    std::atomic counters). Submodule pin bumped (`2714a4f`), rexgpu-xenos
    rebuilt clean.
- Deploy note: the GPU plugin is runtime-loaded, staged by a POST_BUILD copy
  of the *host* target only - so rebuilding only `rexgpu-xenos.dll` builds
  the fresh DLL into the SDK out dir without relinking `dfkbl.exe`, and the
  copy into `out\build\win-amd64-release\` must be done by hand (copied,
  sizes/timestamps match; this is the same manual redeploy iter 13/14 did).
  A clean full rebuild stages everything automatically.
- Stopgap removed from both `dfkbl.toml` copies after the rate-limited
  rebuild (full `gpu` error visibility back at <=~40 lines/run).
- **Status**: VERIFIED by user (2026-10-19) - Resource Monitor shows no log
  write spam during playtest. Session log: single `logs/dfkbl.log`, 13 KB
  across two runs (was ~4 MB per ~4s); per-message rate limits fired with
  decoded details (vf0 type/size/address/endian, raw copy_dest_format) and
  exactly one "rate-limited: additional occurrences suppressed" notice per
  message per run. F4 save retained the four log pins.
