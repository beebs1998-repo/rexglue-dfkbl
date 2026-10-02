# Project Overview
Recompilation of the Xbox 360 shooter *Dodonpachi Daifukkatsu Black Label (DFKBL)* using the `rexglue-sdk`.

# Prerequisites & Environment Configuration
- **Primary SDK Path:** `i:\workspace\dfkbl\rexglue-sdk\`
- **Input Executable:** `game_data/default.xex`
- **Toolchain:** `rexglue` CLI, CMake
- **Reference Documentation:** `i:\workspace\rexglue-sdk.wiki\`, `i:\workspace\360tools\`, `i:\workspace\xenia-canary.wiki\`
- **Example Manifest Overrides:** `360tools/templates/overlay/manifest-overrides.example.toml`
- **Address Reference File:** `ep.txt`

# Step-by-Step Workflow

## 1. Project Initialization
Execute the following command to generate the project structure and manifest file:
```bash
rexglue init --project-name "dfkbl" --game-root game_data --xex-path game_data/default.xex --force
```
**Success Criteria:** `dfkbl_manifest.toml` is created in the project root.  
**Failure Handling:** Verify the integrity of `default.xex`. Check SDK logs for header parsing errors.

## 2. Manifest Configuration & Code Generation
Generate source code from the manifest:
```bash
rexglue codegen dfkbl_manifest.toml
```
**Error Resolution:**
- If compilation or generation fails, edit `dfkbl_manifest.toml`.
- Use `360tools/templates/overlay/manifest-overrides.example.toml` as a reference for valid configuration fields.
- Cross-reference missing addresses in `ep.txt` and add them to the manifest before regenerating.

## 3. Build Execution
Configure and compile the project:
```bash
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --target dfkbl -j 8
```
**Success Criteria:** Build completes with zero errors. Warnings are acceptable but should be documented.  
**Failure Handling:** Address compiler/linker errors. Verify that all generated symbols match expected XEX exports.

## 4. Runtime Execution & Logging
1. Copy the following binaries to the project root: `dfkbl.exe`, `rexgpu-xenos.dll`, `rexruntime.dll`, `TracyClient.dll`
2. Launch the application:
```bash
dfkbl.exe --game_data_root="game_data" --user_data_root="user_data"
```
**Runtime Behavior:** The executable will continuously write logs to the `logs/` directory. Allow execution to run until log writes stabilize or until manual termination is required. Do not kill the game process, wait until it crashes or exit on its own.

## 5. Log Analysis & Iteration Cycle
1. Navigate to the `logs/` directory and identify the most recently modified log file.
2. Filter entries strictly for `[error]` and `[critical]` tags. Ignore `[warning]` entries unless they directly correlate with a crash or missing functionality.
3. Record unresolved addresses, missing symbols, or runtime exceptions in a tracking document.
4. Return to Step 2 to update `dfkbl_manifest.toml` and regenerate code until critical errors are resolved.

# Critical Paths & References
- **Default SDK:** `i:\workspace\dfkbl\rexglue-sdk\`
- **rexglue wiki:** `i:\workspace\rexglue-sdk.wiki\`
- **Xenia wiki:** `i:\workspace\xenia-canary.wiki\`
- **Reference Documentation:** `i:\workspace\360tools\docs\`
- **Example Manifest Overrides:** `360tools/templates/overlay/manifest-overrides.example.toml`
- **Address Reference:** `ep.txt`
- **Projects method that should be followed:** `i:\workspace\futari\` (recommended), `i:\workspace\SDOJ-Recomp\`
- **Useful XEX tools:** `i:\workspace\360tools\tools\xex_info.py`

# Module Architecture Notes
- **Primary Executable:** `default.xex`
- **Dynamic Loading:** The game loads additional modules based on in-game menu selections.
- **Game mode Modules:** 3 Game mode module XEX files (`dat15/dat164/dat165.bin`) all possibly share base address `0x88000000`. Only one is loaded at a time (mutually exclusive).
- **Known in-game mapping/layout:** 
  1. Black Label (dat15.bin)
  2. Novice mode
  3. Arrange mode

# Restrictions
1. DO NOT modify this file, `instructions.md`