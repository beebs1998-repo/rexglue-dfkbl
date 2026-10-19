# DFKBL Recomp

Recompilation of the Xbox 360 shooter *DoDonPachi DaiFukkatsu Black Label* (DFKBL)
using [ReXGlue](https://github.com/rexglue/rexglue-sdk).

The project builds a native `dfkbl.exe` (plus three game-mode module DLLs) from
statically recompiled PowerPC code. **The recompiled code and a patched ReXGlue SDK
are included in this repository**, so the project builds on a clean machine without
the game. Only *running* it needs your own copy of the game data.

For the engineering history (what was fixed and why), see [TRACKING.md](TRACKING.md).

## Requirements

**To build** — no game files needed:

- CMake 3.25 or newer
- Ninja
- LLVM/Clang with C++23 support
- Windows: Visual Studio C++ build tools with a Windows SDK
- Linux: `libgtk-3-dev libx11-xcb-dev libvulkan-dev libasound2-dev libpulse-dev libpipewire-0.3-dev`
  (Debian/Ubuntu names); the `linux-*` presets expect `clang-20`/`clang++-20`

**To run** — your own copy of the DFKBL disc, extracted into `game_data/`:

```
game_data/
├─ default.xex          # entrypoint
├─ dat15.bin            # Black Label game-mode module
├─ dat164.bin           # Novice game-mode module
├─ dat165.bin           # Arrange game-mode module
├─ res/DISKDATA/...     # disc data
├─ AvatarAssetPack
└─ nxeart
```

The three `dat*.bin` modules are loaded mutually exclusively from the in-game mode
menu; all three share guest base `0x88000000`.

## Layout

| Path | What |
| --- | --- |
| `src/` | Host application (`main.cpp`, `dfkbl_app.h`) |
| `generated/default/` | Recompiled entrypoint + `dll_targets.cmake` / `module_registry.cpp` |
| `generated/dat15|dat164|dat165/` | Recompiled game-mode modules |
| `generated/rexglue.cmake` | SDK/CMake glue (codegen auto-generation disabled — see below) |
| `dfkbl_manifest.toml` | Codegen manifest (entrypoint + 3 modules) |
| `dfkbl*_functions.toml` | Extra dynamic entrypoints registered per target |
| `dfkbl.toml` | Settings template — the live copy is written next to the exe; editable via the F4 overlay |
| `thirdparty/rexglue-sdk/` | Patched ReXGlue SDK (git submodule, pinned) |
| `scripts/codegen_all.ps1` | Regenerate all recompiled code (needs the game) |
| `TRACKING.md` | Iteration log (bugs found + fixes) |

## Building

Clone with the submodule:

```
git clone --recurse-submodules https://github.com/beebs1998-repo/rexglue-dfkbl.git
cd rexglue-dfkbl
```

(Already cloned without it? Run `git submodule update --init --recursive`.)

The SDK submodule itself pulls ~20 upstream dependencies on first init, so this
step can take a few minutes.

### Windows

```
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --parallel
```

### Linux

```
cmake --preset linux-amd64-release
cmake --build --preset linux-amd64-release --parallel
```

> Linux is supported by the SDK and is exercised by CI, but has been validated
> less than Windows for this title. Report anything that breaks.

The build places the executable and all module/runtime DLLs in
`out/build/<preset>/`.

## First launch

1. Put your extracted game data in `game_data/` (see Requirements).
2. Either run `launch.bat` (Windows), or start the executable directly:

```
out\build\win-amd64-release\dfkbl.exe --game_data_root="game_data" --user_data_root="user_data"
```

The game writes logs to `logs/` and saves to `user_data/`.

## Settings

The game reads and writes `dfkbl.toml` **next to the executable** (the copy in
this repository is a template; run from `out\build\win-amd64-release` and the
live file is written there). Settings can be changed live from the in-game
overlay (press **F4**, then *Save to config*).

Saving is **diff-only**: only cvars whose current value differs from the
compiled-in SDK default are written. A cvar sitting at its default therefore
does not appear in the file, and a default-equal line is dropped by the next
save — that is expected, not a desync between the menu and the file.

Notable consequence for this title:

- `d3d12_submit_on_primary_buffer_end` defaults to `false` in the bundled SDK
  — this flip **is** the validated slowdown fix. Its line is normally
  *absent* from `dfkbl.toml`; absence == default == fix active. It only
  appears again if you check it (`true`) in F4.

Current notable options (bundled pristine-mainline SDK):

| Option | Default | Effect |
| --- | --- | --- |
| `d3d12_submit_on_primary_buffer_end` | `false` | D3D12 submission at primary buffer end; `false` is the validated slowdown fix for this title (diff-only save usually omits it) |
| `vsync` | `true` | Present sync; keep on for correct 60 Hz guest pacing |
| `gpu_allow_invalid_fetch_constants` | `false` | Accept invalid Xenos fetch constants instead of failing the draw |
| `mnk_mode` | `false` | Keyboard/mouse controller emulation (enabled in the template) |

## Regenerating the recompiled code (optional)

Only needed if you change the manifest/function lists, or bump the SDK. It
requires the game files **and** the `rexglue` CLI (built with the SDK).

```
.\scripts\codegen_all.ps1
```

Then rebuild. Two things to know:

- The three modules share guest base `0x88000000`, so codegen refuses to process
  them in a single run; the script runs one target per invocation.
- `codegen` rewrites `generated/default/dll_targets.cmake`,
  `generated/default/module_registry.cpp` and `generated/rexglue.cmake` for the
  *last* target only. The committed copies are hand-merged (all three modules) and
  auto-codegen is disabled in `rexglue.cmake`. The script restores them
  (`git checkout -- ...`) after running; don't let these get clobbered.

## Known issues

- **GPU resolve spam** — DFKBL issues resolve ops the Xenos backend can't execute
  (resolves to 1-bit `k_1_REVERSE`, and resolve vertex layouts that aren't
  `kVertex`/size 6). They are dropped gracefully; some resolve-to-texture effects
  may be missing. The backend rate-limits these logs (see TRACKING.md iterations
  13/20/21). Functional 1bpp-resolve support isn't feasible in this backend.
- **Slowdown** — the game's slowdown is guest-time/backpressure coupled, not
  vblank-count coupled. Iteration 21 removed the pathological stutter (synchronous
  GPU error logging saturating the command-processor thread). Depth now tracks console
  behaviour; a residual smoothness gap vs xenia-edge is a D3D12 submission-throughput
  limitation (see TRACKING.md iteration 26).

## Credits & legal

- Runtime/toolkit: [ReXGlue](https://github.com/rexglue/rexglue-sdk); this repo pins
  a lightly patched fork (`thirdparty/rexglue-sdk`) with the GPU-logging, pacing and
  module-reload fixes described in `TRACKING.md`.
- **No game data or ROMs are included.** You must own DFKBL and extract your own
  `game_data/`. The recompiled code in `generated/` is derived from that game and is
  provided for interoperability/archival research; use only with legally owned data.
