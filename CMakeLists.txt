cmake_minimum_required(VERSION 3.22)
project(PasswordGenerator)

set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_STANDARD 20)

add_executable(PasswordGenerator
        PasswordGenerator/core.cpp)
