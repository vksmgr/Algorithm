cmake_minimum_required(VERSION 3.6)
project(Algorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/algorithms/sorting/sorting.c src/algorithms/sorting/sorting.h src/mylib/mylib.c src/mylib/mylib.h src/hacker/problems.c src/hacker/problems.h src/algorithms/searching/search.c src/algorithms/searching/search.h src/mylib/datastructure/ds.c src/mylib/datastructure/ds.h src/codeMonk/codeMonk.c src/codeMonk/codeMonk.h)
add_executable(Algorithm ${SOURCE_FILES})