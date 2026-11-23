cmake_minimum_required(VERSION 3.16)
if(NOT DEFINED VITASDK)
    set(VITASDK "$ENV{VITASDK}")
endif()
if(NOT EXISTS "${VITASDK}/share/vita.toolchain.cmake")
    message(FATAL_ERROR "Set VITASDK to an installed VitaSDK directory")
endif()
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "${VITASDK}/share/vita.toolchain.cmake" CACHE FILEPATH "VitaSDK toolchain")
endif()
if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
    message(FATAL_ERROR "Keep build products separate: cmake -S . -B build")
endif()
project(escapists_vita LANGUAGES C CXX)
include("${VITASDK}/share/vita.cmake" REQUIRED)
find_package(SDL2 REQUIRED)
option(ESCAPISTS_COMPILE_ONLY "Compile the game without linking/packaging; no VPK" OFF)
option(ESCAPISTS_VITAGL_SPLASH "Show vitaGL's optional threaded boot animation" OFF)
option(ESCAPISTS_VITA_DIAGNOSTICS "Enable Vita startup diagnostic output" OFF)
option(ESCAPISTS_VITA_60FPS "Enable Vita timing and performance integration" ON)
option(ESCAPISTS_VITA_NATIVE_TROPHIES "Enable optional NoTrpDrm native trophy integration" ON)
option(ESCAPISTS_VITA_GC_SECTIONS "Remove unreachable functions and data from the Vita executable" ON)
option(ESCAPISTS_VITA_TEST_UNLOCK_PRISONS "Unlock all prisons in this private test build" OFF)
option(ESCAPISTS_VITA_BUNDLE_GAME_DATA "Bundle local game data for PRIVATE testing (disable for distribution)" OFF)
set(VITA_ROOT "${CMAKE_CURRENT_LIST_DIR}")
set(ESCAPISTS_GAME_DATA_DIR "${VITA_ROOT}/game-data" CACHE PATH "User-supplied data for private bundled builds")
set(VITA_DIR "${VITA_ROOT}/vita")
set(BASE "${VITA_ROOT}/runtime")
# This is the editable Vita source tree. Builds never regenerate these files.
set(GAMEPLAY_DIR "${VITA_ROOT}/gameplay")
if(NOT EXISTS "${GAMEPLAY_DIR}/sources.cmake" OR
   NOT EXISTS "${GAMEPLAY_DIR}/vita_controls_catalog.h" OR
   NOT EXISTS "${GAMEPLAY_DIR}/objects.h")
    message(FATAL_ERROR "Editable game sources and control catalog are required in ${GAMEPLAY_DIR}")
endif()
set(CHOWDREN_BASE_DIR "${BASE}")
include("${GAMEPLAY_DIR}/sources.cmake")
foreach(group FRAMESRCS EVENTSRCS OBJECTSRCS EXTSRCS)
    foreach(entry IN LISTS ${group})
        if(IS_ABSOLUTE "${entry}")
            list(APPEND GAME_SOURCES "${entry}")
        else()
            list(APPEND GAME_SOURCES "${GAMEPLAY_DIR}/${entry}")
        endif()
    endforeach()
endforeach()
# Readable aliases (aliases.h) for the generated/prepared event code. Applied per
# source (events_N.cpp only, C++ only) so the C libogg/libvorbis files and the
# runtime sources are untouched; no "#include" is needed in regenerated files.
foreach(src IN LISTS GAME_SOURCES)
    get_filename_component(src_name "${src}" NAME)
    if(src_name MATCHES "^events_[0-9]+\\.cpp$")
        set_property(SOURCE "${src}" PROPERTY COMPILE_OPTIONS
            "-include" "${VITA_DIR}/aliases.h")
    endif()
endforeach()
foreach(name render run keyconv image assetfile pools font movement common media fpslimit broadphase profiler stringcommon)
    list(APPEND GAME_SOURCES "${BASE}/${name}.cpp")
endforeach()
file(GLOB OGG_SOURCES "${BASE}/staticlibs/libogg/src/*.c")
file(GLOB VORBIS_SOURCES "${BASE}/staticlibs/libvorbis/lib/*.c")
list(APPEND GAME_SOURCES ${OGG_SOURCES} ${VORBIS_SOURCES}
    "${GAMEPLAY_DIR}/fonts.cpp" "${GAMEPLAY_DIR}/lists.cpp"
    "${BASE}/desktop/platform.cpp" "${BASE}/desktop/fbo.cpp" "${BASE}/desktop/glslshader.cpp"
    "${VITA_DIR}/assets.cpp" "${VITA_DIR}/controls.cpp" "${VITA_DIR}/settings.cpp"
    "${VITA_DIR}/tutorial-cloud.cpp" "${VITA_DIR}/activity-panel.cpp"
    "${VITA_DIR}/trophies.cpp" "${VITA_DIR}/trophies-native.cpp"
    "${VITA_DIR}/timing.cpp" "${VITA_DIR}/view.cpp"
    "${VITA_DIR}/alias/layout.cpp")
set_source_files_properties("${BASE}/desktop/platform.cpp" "${BASE}/desktop/glslshader.cpp" "${BASE}/render.cpp"
    PROPERTIES COMPILE_DEFINITIONS CHOWDREN_VITA_VITAGL)
add_library(escapists_objects OBJECT ${GAME_SOURCES})
if(ESCAPISTS_VITA_NATIVE_TROPHIES)
    target_compile_definitions(escapists_objects PRIVATE ESCAPISTS_VITA_NATIVE_TROPHIES)
endif()
if(ESCAPISTS_VITA_DIAGNOSTICS)
    target_compile_definitions(escapists_objects PRIVATE CHOWDREN_VITA_DIAGNOSTICS)
endif()
target_compile_options(escapists_objects PRIVATE -include "${VITA_DIR}/wide-config.h")
if(ESCAPISTS_VITA_60FPS)
    target_sources(escapists_objects PRIVATE "${VITA_DIR}/performance.cpp")
    target_compile_definitions(escapists_objects PRIVATE CHOWDREN_VITA_60FPS)
endif()
if(ESCAPISTS_VITA_TEST_UNLOCK_PRISONS)
    target_compile_definitions(escapists_objects PRIVATE ESCAPISTS_VITA_TEST_UNLOCK_PRISONS=1)
endif()
if(ESCAPISTS_VITA_GC_SECTIONS)
    target_compile_options(escapists_objects PRIVATE -ffunction-sections -fdata-sections)
endif()
target_compile_features(escapists_objects PRIVATE cxx_std_11)
target_compile_definitions(escapists_objects PRIVATE CHOWDREN_IS_DESKTOP CHOWDREN_USE_GL
    CHOWDREN_VITA_PACKAGED_ASSETS BOOST_ALL_NO_LIB BOOST_NO_EXCEPTIONS BOOST_EXCEPTION_DISABLE)
if(ESCAPISTS_VITA_BUNDLE_GAME_DATA)
    target_compile_definitions(escapists_objects PRIVATE CHOWDREN_VITA_BUNDLE_GAME_DATA)
endif()
target_compile_options(escapists_objects PRIVATE $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>)
target_include_directories(escapists_objects PRIVATE
    "${VITA_DIR}" "${GAMEPLAY_DIR}" "${BASE}" "${BASE}/desktop"
    "${BASE}/include/desktop" "${BASE}/include/desktop/AL" "${BASE}/include/staticlibs"
    "${BASE}/staticlibs/libvorbis/lib")
# Third-party headers (Boost): system include, so their warnings are not reported.
# Must not also be listed above as a normal include directory.
target_include_directories(escapists_objects SYSTEM PRIVATE "${BASE}/include")
target_link_libraries(escapists_objects PRIVATE SDL2::SDL2)
if(NOT ESCAPISTS_COMPILE_ONLY)
    find_library(VITAGL_LIBRARY NAMES vitaGL)
    find_library(OPENAL_LIBRARY NAMES openal)
    if(NOT VITAGL_LIBRARY OR NOT OPENAL_LIBRARY)
        message(FATAL_ERROR "Game libraries missing. Run vdpm install sdl2_vitagl openal-soft (allow SDL2 variant replacement). No game VPK has been built.")
    endif()
    # SDL2's vitaGL variant provides graphics dependencies through SDL2::SDL2.
    get_target_property(SDL_LINKS SDL2::SDL2-static INTERFACE_LINK_LIBRARIES)
    if(NOT "${SDL_LINKS}" MATCHES "vitaGL")
        message(FATAL_ERROR "Install the sdl2_vitagl variant; standard SDL2 has no desktop GL backend")
    endif()
    add_executable(TheEscapists $<TARGET_OBJECTS:escapists_objects>)
    target_include_directories(TheEscapists PRIVATE "${BASE}")
    if(ESCAPISTS_VITA_DIAGNOSTICS)
        target_compile_definitions(TheEscapists PRIVATE CHOWDREN_VITA_DIAGNOSTICS)
    endif()
    if(ESCAPISTS_VITA_GC_SECTIONS)
        target_link_options(TheEscapists PRIVATE "-Wl,--gc-sections"
            "-Wl,--undefined=_newlib_heap_size_user"
            "-Wl,-Map=${CMAKE_CURRENT_BINARY_DIR}/TheEscapists.map")
    endif()
    if(NOT ESCAPISTS_VITAGL_SPLASH)
        # The SDK's prebuilt vitaGL has the animation enabled. Disable its
        # launch with GNU ld wrapping without modifying the shared SDK archive.
        execute_process(COMMAND "${CMAKE_NM}" "${VITAGL_LIBRARY}"
            OUTPUT_VARIABLE VITAGL_SYMBOLS RESULT_VARIABLE VITAGL_NM_RESULT)
        string(FIND "${VITAGL_SYMBOLS}" " U invoke_splashscreen" VITAGL_SPLASH_REFERENCE)
        if(NOT VITAGL_NM_RESULT EQUAL 0 OR VITAGL_SPLASH_REFERENCE EQUAL -1)
            message(FATAL_ERROR "This vitaGL has no supported splash launch hook. Set ESCAPISTS_VITAGL_SPLASH=ON to leave library startup unchanged.")
        endif()
        target_sources(TheEscapists PRIVATE "${VITA_DIR}/nosplash.cpp")
        target_link_options(TheEscapists PRIVATE "-Wl,--wrap=invoke_splashscreen")
    endif()
    # vita-elf-create appends SCE import/module metadata to the text segment.
    # Reserve a page using VitaSDK's linker-script hook instead of depending
    # on whichever gap the current code size happens to leave before data.
    target_link_options(TheEscapists PRIVATE "-Wl,--defsym=__sce_headroom=0x10000")
    target_link_libraries(TheEscapists PRIVATE ${OPENAL_LIBRARY} SDL2::SDL2
        ${VITAGL_LIBRARY} SceNet_stub SceNetCtl_stub SceIofilemgr_stub
        SceAudio_stub SceCtrl_stub ScePower_stub SceKernelThreadMgr_stub pthread m)
    if(ESCAPISTS_VITA_NATIVE_TROPHIES)
        target_link_libraries(TheEscapists PRIVATE SceNpTrophy_stub SceCommonDialog_stub SceSysmodule_stub)
    endif()
    # SDL's imported target omits vitaShaRK's shader-extension dependencies.
    # Keep these after vitaShaRK so static-library references resolve in order.
    target_link_libraries(TheEscapists PRIVATE vitashark SceShaccCgExt taihen_stub
        SceShaccCg_stub SceKernelModulemgr_stub SceLibKernel_stub)
    # A normal game uses the default (zero) SELF memory-budget field. MEMSIZE
    # is a system-mode allocation request, not the game's ordinary RAM limit.
    # Requesting 262144 KiB here can prevent launch on retail hardware.
    vita_create_self(TheEscapists.self TheEscapists UNSAFE)
    set(GAME_ICON "${VITA_DIR}/icon0.png")
    set(TROPHY_IMAGE_DIR "${VITA_DIR}/trophies/icons")
    file(GLOB TROPHY_IMAGES CONFIGURE_DEPENDS "${TROPHY_IMAGE_DIR}/*.jpg")
    list(LENGTH TROPHY_IMAGES TROPHY_IMAGE_COUNT)
    if(NOT TROPHY_IMAGE_COUNT EQUAL 74)
        message(FATAL_ERROR "All 74 supplied achievement images are required in ${TROPHY_IMAGE_DIR}")
    endif()
    # The Vita cross compiler cannot produce a runnable build-host tool.
    find_program(ESCAPISTS_HOST_CXX NAMES c++ g++ clang++ NO_CMAKE_FIND_ROOT_PATH)
    if(NOT ESCAPISTS_HOST_CXX)
        message(FATAL_ERROR "A host C++ compiler is required. Set ESCAPISTS_HOST_CXX to its path.")
    endif()
    set(HOST_TOOL_SUFFIX "")
    if(CMAKE_HOST_WIN32)
        set(HOST_TOOL_SUFFIX ".exe")
    endif()
    set(ESCAPISTS_PACK_TOOL "${CMAKE_CURRENT_BINARY_DIR}/tools/escapists-pack${HOST_TOOL_SUFFIX}")
    add_custom_command(OUTPUT "${ESCAPISTS_PACK_TOOL}"
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/tools"
        COMMAND "${ESCAPISTS_HOST_CXX}" -std=c++11 -O2 -Wall -Wextra -Wpedantic -isystem "${BASE}"
            "${VITA_DIR}/trophies/pack.cpp" -o "${ESCAPISTS_PACK_TOOL}"
        DEPENDS "${VITA_DIR}/trophies/pack.cpp" "${VITA_DIR}/trophies/catalog.h" "${BASE}/stb_image.h"
        VERBATIM)
    add_custom_target(escapists_pack_tool DEPENDS "${ESCAPISTS_PACK_TOOL}")
    add_dependencies(TheEscapists escapists_pack_tool)
    if(ESCAPISTS_VITA_NATIVE_TROPHIES)
        set(TROPHY_PACK "${CMAKE_CURRENT_BINARY_DIR}/trophies/TROPHY.TRP")
        add_custom_command(OUTPUT "${TROPHY_PACK}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/trophies"
            COMMAND "${ESCAPISTS_PACK_TOOL}" --output "${TROPHY_PACK}" --icon "${GAME_ICON}" --images "${TROPHY_IMAGE_DIR}"
            DEPENDS "${ESCAPISTS_PACK_TOOL}" "${GAME_ICON}" ${TROPHY_IMAGES}
            VERBATIM)
        add_custom_target(escapists_trophies DEPENDS "${TROPHY_PACK}")
        add_dependencies(TheEscapists escapists_trophies)
        if(NOT VITA_MKSFOEX_FLAGS MATCHES "ATTRIBUTE2=")
            string(APPEND VITA_MKSFOEX_FLAGS " -d ATTRIBUTE2=12")
        endif()
    endif()
    set(PACKAGED_FILES FILE "${GAME_ICON}" "sce_sys/icon0.png")
    # Requested achievement artwork is independent of gameplay-data bundling
    # and remains available even when native trophy support is disabled.
    foreach(trophy_image IN LISTS TROPHY_IMAGES)
        get_filename_component(trophy_image_name "${trophy_image}" NAME)
        list(APPEND PACKAGED_FILES FILE "${trophy_image}" "trophies/icons/${trophy_image_name}")
    endforeach()
    if(ESCAPISTS_VITA_NATIVE_TROPHIES)
        list(APPEND PACKAGED_FILES FILE "${TROPHY_PACK}" "sce_sys/trophy/ESCP00002_00/TROPHY.TRP")
    endif()
    foreach(livearea_file template.xml bg.png startup.png)
        list(APPEND PACKAGED_FILES FILE "${VITA_DIR}/livearea/contents/${livearea_file}"
            "sce_sys/livearea/contents/${livearea_file}")
    endforeach()
    # Port-owned replacements live inside the application in every build mode.
    # Original Assets.dat/Data/Music remain conditional on the private switch.
    file(GLOB_RECURSE image_overrides CONFIGURE_DEPENDS RELATIVE "${VITA_DIR}/overrides"
        "${VITA_DIR}/overrides/*.png" "${VITA_DIR}/overrides/*.PNG")
    foreach(override_image IN LISTS image_overrides)
        list(APPEND PACKAGED_FILES FILE "${VITA_DIR}/overrides/${override_image}"
            "overrides/${override_image}")
    endforeach()
    if(ESCAPISTS_VITA_BUNDLE_GAME_DATA)
        if(NOT EXISTS "${ESCAPISTS_GAME_DATA_DIR}/Assets.dat")
            message(FATAL_ERROR "Private test packaging requires Assets.dat in ESCAPISTS_GAME_DATA_DIR")
        endif()
        list(APPEND PACKAGED_FILES FILE "${ESCAPISTS_GAME_DATA_DIR}/Assets.dat" "assets/Assets.dat")
        foreach(folder Data Music)
            file(GLOB_RECURSE assets RELATIVE "${ESCAPISTS_GAME_DATA_DIR}" "${ESCAPISTS_GAME_DATA_DIR}/${folder}/*")
            foreach(asset IN LISTS assets)
                if(NOT IS_DIRECTORY "${ESCAPISTS_GAME_DATA_DIR}/${asset}")
                    list(APPEND PACKAGED_FILES FILE "${ESCAPISTS_GAME_DATA_DIR}/${asset}" "assets/${asset}")
                endif()
            endforeach()
        endforeach()
    endif()
    if(ESCAPISTS_VITA_BUNDLE_GAME_DATA)
        set(VPK_FILE "TheEscapists-private-test-with-data.vpk")
        set(VPK_TITLE "The Escapists - Private Test")
    else()
        set(VPK_FILE "TheEscapists.vpk")
        set(VPK_TITLE "The Escapists")
    endif()
    vita_create_vpk("${VPK_FILE}" "ESCP00002" TheEscapists.self
        VERSION "00.01" NAME "${VPK_TITLE}" ${PACKAGED_FILES})
endif()
