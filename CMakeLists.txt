# dfkbl - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(dfkbl LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use the bundled ReXGlue SDK (git submodule at thirdparty/rexglue-sdk).
# Override with -DREXSDK_DIR=<path> to build against another SDK tree.
set(REXSDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/rexglue-sdk"
    CACHE PATH "Path to the bundled ReXGlue SDK")

include(generated/rexglue.cmake)

# Sources
set(DFKBL_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(dfkbl WIN32 ${DFKBL_SOURCES})
else()
    add_executable(dfkbl ${DFKBL_SOURCES})
endif()

# Recompiled entrypoint is built as an OBJECT library and linked into the host.
# Auto-codegen is intentionally disabled (see generated/rexglue.cmake): the three
# game-mode modules share guest base 0x88000000, so a single combined codegen run
# is rejected by the overlap check. Code is generated per target and committed.
if(REXGLUE_ENTRYPOINT_GENERATED_SOURCES)
    add_library(dfkbl_recomp OBJECT
        ${REXGLUE_ENTRYPOINT_GENERATED_SOURCES})
    target_include_directories(dfkbl_recomp PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${REXGLUE_ENTRYPOINT_INCLUDE_DIR}
    )
    target_link_libraries(dfkbl_recomp PRIVATE rex::runtime)
    rexglue_apply_target_settings(dfkbl_recomp)
    rexglue_apply_recomp_settings(dfkbl_recomp
        "${REXGLUE_ENTRYPOINT_INCLUDE_DIR}/dfkbl_pch.h")
    target_link_libraries(dfkbl PRIVATE
        dfkbl_recomp)
endif()

target_include_directories(dfkbl PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${REXGLUE_ENTRYPOINT_INCLUDE_DIR}
)
target_link_libraries(dfkbl PRIVATE rex::runtime imgui::imgui)
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/metadata/icons")
    rexglue_embed_metadata(dfkbl
        DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/metadata/icons"
        PREFIX "icons")
endif()
rexglue_configure_target(dfkbl GPU_PLUGINS xenos)