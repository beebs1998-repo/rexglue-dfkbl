# dfkbl - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(dfkbl LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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

rexglue_setup_target(dfkbl)
