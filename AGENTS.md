# AGENTS.md — working in this repository

Agent- and developer-facing notes. For the public, human-facing guide, see
[README.md](README.md). All paths are repo-relative.

## What this is

A [ReXGlue](https://github.com/rexglue/rexglue-sdk) recompilation of the Xbox 360
shooter *DoDonPachi DaiFukkatsu Black Label*. It builds a native host executable
(`dfkbl`) from statically recompiled PowerPC code, plus three game-mode module
shared libraries loaded at runtime.

Two facts dominate everything else:

1. **The recompiled code is committed.** `generated/**` is checked in, so the
   project builds without the game. Do not hand-edit generated files; regenerate
   them instead (`scripts/codegen_all.ps1`).
2. **The SDK is a pinned submodule with local patches.** `thirdparty/rexglue-sdk`
   points at `beebs1998-repo/rexglue-sdk` @ `9019af7407c3a8c272e095fc5a02ee348d077a33`
   (`main` tip; branch refs were rewritten 2026-10-19 to scrub placeholder commit
   identities — pre-scrub equivalent: `08c9774...`; `a1b93af5...` on
   `fix/cvar-toml-serialization` is now `b773a88...`)
   (pristine mainline: `v0.10.0` + 5 commits — SSSE3 build flag, module-filename
   match fix, NT device-prefix strip fix, `d3d12_submit_on_primary_buffer_end=false`
   default, cvar TOML save-serialization fix). Config cvars are the pristine
   v0.10.0 set; the experiments line (pacing/present cvars, log rate-limiters)
   lives on the `legacy` branch. Building against a different SDK can
   change/crash behaviour.

## Layout

| Path | Notes |
| --- | --- |
| `src/main.cpp` | `REX_DEFINE_APP`; includes `generated/default/dfkbl_init.h` |
| `src/dfkbl_app.h` | `DfkblApp` — overrides `ReXApp` hooks, debug-overlay frame stats |
| `generated/default/` | Entrypoint recomp + `dll_targets.cmake`, `module_registry.cpp`, `sources.cmake` |
| `generated/dat15`, `dat164`, `dat165/` | Module recomp |
| `generated/rexglue.cmake` | CMake glue; **auto-codegen is disabled here** (see below) |
| `dfkbl_manifest.toml` | Codegen manifest (entrypoint + 3 modules) |
| `dfkbl_functions.toml` | Dynamic entrypoints for the entrypoint XEX |
| `dfkbl_dat15_functions.toml`, `dfkbl_dat164_functions.toml`, `dfkbl_dat165_functions.toml` | Dynamic entrypoints per module |
| `dfkbl_hints.toml`, `dfkbl_dat15/164/165_hints.toml` | Generated function-entry hints (see "Static function-hint derivation"); listed FIRST in the manifest |
| `dfkbl.toml` | Runtime settings (auto-written by the app; also live-editable via F4) |
| `TRACKING.md` | Iteration log — read before changing runtime/GPU behaviour |
| `game_data/`, `user_data/`, `logs/`, `out/` | Local only, gitignored |

## Build & run

```
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --parallel
out\build\win-amd64-release\dfkbl.exe --game_data_root=game_data --user_data_root=user_data
```

`game_data/` must contain your own `default.xex`, `dat15/164/165.bin` and `res/`.
Requires the submodule: `git submodule update --init --recursive`.

## Codegen

Auto-codegen is deliberately disabled in `generated/rexglue.cmake`. Reason: all
three game-mode modules share guest base address `0x88000000`, so a single combined
`rexglue codegen dfkbl_manifest.toml` run is rejected by the overlap check. Code is
generated one target per run and committed.

Two generated files are **hand-merged** and must not be clobbered:

- `generated/default/dll_targets.cmake` — CMake targets for all three module DLLs.
- `generated/default/module_registry.cpp` — registers all three modules.

`rexglue codegen --target <name>` rewrites both (and `generated/rexglue.cmake`) for
the last target only. `scripts/codegen_all.ps1` runs each target then restores the
committed versions with `git checkout --`. If you regenerate by hand, do the same.

Workflow when the game hits an unregistered function
(`[FATAL] Call to invalid or unregistered function at guest address 0x...`):

That workflow is now obsolete for the common case — the crash class is
prevented statically (next section). Only fall back to the manual steps
(address-adding + regenerate + rebuild + iteration note) for something the
derivation pass could not see (address outside the XenonRecomp map).

## Static function-hint derivation (`scripts/build_module_hints.ps1`)

The analyzer misses functions that are only reached by indirect calls (no
PDATA/static edge), and each used to be found by playtesting until a
`[FATAL] Call to invalid or unregistered function` fired. The derivation pass
finds them all statically instead, per target:

1. Run XenonRecomp (git submodule `thirdparty/XenonRecomp`, fork
   `beebs1998-repo/XenonRecomp` pinned to upstream `ddd128b`; build once per
   machine with `pwsh .\scripts\bootstrap_xenon.ps1`) on the image for a
   full-coverage reference function map (PDATA + bl-scan + gap-fill).
2. Diff that map against ReXGlue's registered set (a clean codegen run with
   the target's TOML includes emptied — the entrypoint always keeps
   `dfkbl_functions.toml`, whose dynamic entrypoints are invisible to static
   analysis and required by CLI validation). `-Quick` reads the committed
   `dfkbl_init.cpp` instead.
3. Bulk-seed the diff into `dfkbl*_hints.toml`; codegen; drop candidates that
   logged stubs (data/gap-fill misidentifications); write the final hints
   file (`dfkbl_hints.toml` for the shell, `dfkbl_dat15/164/165_hints.toml`
   for the modules).

Notes learned by painful debugging (kept from the futari port):

- The CLI resolves every path relative to the manifest itself. Temp manifests
  (`.hints_tmp.toml`) must live at the repo root, and they are removed by the
  script.
- XenonRecomp nested submodules (fmt/tomlplusplus/xxHash) appear as
  existing-but-empty dirs when not initialized; `bootstrap_xenon.ps1` handles
  them (verify with `git -C thirdparty/XenonRecomp submodule status` — no '-'
  prefixes).
- One codegen target per run (overlap check: all modules share 0x88000000).

## Embedded-trap gate (`scripts/validate_codegen.ps1`)

Scans `generated/` for recompiler failure modes emitted as embedded traps
(`REX_FATAL("Unresolved call/branch ...")`, unregistered jumps, `// STUB:`),
plus the SDK's switch-case out-of-range `__builtin_trap()` sites
(informational only — still emitted by the current SDK; porting the switch
fallback would remove them). Running after every codegen turn (`codegen_all.ps1`)
and in CI before Configure, it fails loudly on a new site identity with
file:line + guest addresses, instead of during playtesting.

Triaged baseline: **145 sites, all in the shell twin-block clusters**
(`0x820A0Cxx`, `0x820D9xxx`, `0x820DB0xx`, `0x821C6xxx`, `0x821CBxxx`,
`0x8235BDxx`) — functions whose interior branches point into
not-quite-registered twin blocks; the same class futari documented. Allow-list
identities are `<target> <class> <guest addresses>` in
`scripts/trap_allowlist.txt`; a new site not listed there fails the gate (fix
it via hints/overrides, or triage it into the file deliberately). Cleaning up
this residue means block overrides or the parent/chunk SDK port — see futari's
`0x82081778` chunk fix for the shape.

## Conventions

- Keep `TRACKING.md` current: each change to runtime/GPU/module behaviour gets an
  iteration entry (symptom → root cause → fix → status).
- Never commit `game_data/`, `user_data/`, `logs/`, `out/`, or binaries — see
  `.gitignore`.
- Do not add `codegen.stamp`/`codegen.partition.json`/`codegen.d` (they embed
  absolute paths; gitignored).
- Registering extra dynamic entrypoints = edit the `*_functions.toml`, not the
  generated `.cpp`.

## Rebuilding the SDK fork

Only if the runtime itself needs changing:

```
cd thirdparty/rexglue-sdk
# make changes, commit, push to the fork
cd ../..
git add thirdparty/rexglue-sdk
git commit -m "Bump SDK to <sha>"
```

Keep `generated/rexglue.cmake` in sync (it is regenerated by codegen, then
re-disabled for auto-codegen). Document SDK-side changes in `TRACKING.md`.

## Debugging

- `[error]`/`[critical]` in `logs/` are the actionable lines; `[warning]` is noise
  unless it correlates with a crash.
- Enable `slowdown_debug_log = true` for `[slowdown-debug]` vblank/swap telemetry.
- The debug overlay is **F3**; settings are **F4**.
