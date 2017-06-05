cmake_minimum_required(VERSION 3.6)
project(Algorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/sorting/sorting.c src/sorting/sorting.h src/sorting/mylib/mylib.c src/sorting/mylib/mylib.h)
add_executable(Algorithm ${SOURCE_FILES})