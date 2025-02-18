cmake_minimum_required(VERSION 3.10)

project(WindowsRouterTool)

set(CMAKE_CXX_STANDARD 11)

include_directories(src/utils)
include_directories(src/gui)

set(SOURCES
    src/main.cpp
    src/utils/network_utils.cpp
    src/gui/main_window.cpp
)

add_executable(WindowsRouterTool ${SOURCES})