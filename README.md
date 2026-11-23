# The Escapists — PS Vita

A work-in-progress PS Vita port of **The Escapists**, with editable game and
Chowdren engine sources, Vita controls, widescreen UI and localization support.

## Build

Requires CMake 3.16+, Make, a host C++ compiler and VitaSDK with SDL2's vitaGL
backend, vitaGL and OpenAL Soft installed.

From the repository root:

```sh
export VITASDK=/path/to/vitasdk
bash build.sh
```

Output: `build/TheEscapists.vpk`. The build excludes original game data and
keeps normal prison progression. Python is not required.

## Install

1. Install `TheEscapists.vpk` on your Vita using VitaShell.
2. Supply `Assets.dat` prepared for this port, plus the original `Data/` and
   `Music/` folders from your own PC copy. Copy them to this exact layout:

   ```text
   ux0:/data/theescapists/Assets.dat
   ux0:/data/theescapists/Data/
   ux0:/data/theescapists/Music/
   ```

3. Launch **The Escapists** from LiveArea.

Original game data and asset-conversion tools are not included in this repository.
NoTrpDrm is required only for native Vita trophies.

Before updating, back up both `ux0:/data/theescapists/` and
`ux0:/data/The Escapists/`; the latter contains game settings and saves.
