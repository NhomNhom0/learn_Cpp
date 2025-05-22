cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(nestedLoops)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nestedLoops src/nested_loop.cpp src/inner_loop.cpp)