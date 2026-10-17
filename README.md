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
| `dfkbl.toml` | Runtime settings (auto-written; also editable via the F4 overlay) |
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

Settings live in `dfkbl.toml` and can be changed live from the in-game overlay
(press **F4**). Defaults here use keyboard input (`mnk_mode = true`); the key
bindings are listed in `dfkbl.toml`.

Notable options added for this title (all in the bundled SDK):

| Option | Default | Effect |
| --- | --- | --- |
| `slowdown_debug_log` | `false` | Once/sec log of vblank/swap rate + boost state |
| `slowdown_pacing_boost` | `false` | Adaptive VBlank pacing for vblank-paced titles |
| `slowdown_pacing_boost_multiplier` | `1.0` | VBlank rate multiplier while boost is engaged |
| `present_guest_thread_immediate` | `true` | Skip the UI-thread present hop (overlay contents freeze during play) |
| `d3d12_present_vsync` | `false` | Present() sync interval (leave off on this title) |

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
