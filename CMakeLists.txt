cmake_minimum_required(VERSION 3.16)
project(video-upscaler-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(videoupscalerai
    src/main.cpp
    src/upscale.cpp
    src/interpolate.cpp
    src/denoise.cpp
    src/cli.cpp
    src/state.cpp
)

target_include_directories(videoupscalerai PRIVATE include)

if(WIN32)
    target_link_libraries(videoupscalerai PRIVATE userenv)
endif()
