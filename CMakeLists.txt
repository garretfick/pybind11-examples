cmake_minimum_required (VERSION 2.8.11)
project (pybind_example)

set(CMAKE_BUILD_TYPE "Debug")

file(GLOB_RECURSE example_SRC ./cpp/src/*.cpp ./cpp/src/*.h)
add_library(example ${LIB_TYPE} ${example_SRC})
