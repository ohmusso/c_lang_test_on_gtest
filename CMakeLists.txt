cmake_minimum_required(VERSION 3.14)
project(sample)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)

# cmake commands
## Generate makefile at Ninja
### command: cmake -B build -G Ninja
## Build
### command: cmake --build build
## Test
### command: ctest --test-dir build
