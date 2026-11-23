#!/usr/bin/env bash
set -euo pipefail

vita_root="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
build_dir="$vita_root/build"

: "${VITASDK:?Set VITASDK to your installed VitaSDK directory}"
export VITASDK
export PATH="$VITASDK/bin:$PATH"

# CBT packages contain no original game data or test prison unlocks.
# These final options override stale cache values and conflicting arguments.
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS_RELEASE='-O1 -DNDEBUG' \
    -DCMAKE_EXPORT_COMPILE_COMMANDS=ON "$@" \
    -S "$vita_root" -B "$build_dir" \
    -DESCAPISTS_COMPILE_ONLY=OFF \
    -DESCAPISTS_VITA_BUNDLE_GAME_DATA=OFF \
    -DESCAPISTS_VITA_TEST_UNLOCK_PRISONS=OFF \
    -DESCAPISTS_VITA_DIAGNOSTICS=OFF

cmake --build "$build_dir" -j"${ESCAPISTS_BUILD_JOBS:-4}"

# Refuse to report success if original game data enters the package.
"$build_dir/tools/escapists-pack" --check-vpk "$build_dir/TheEscapists.vpk"
