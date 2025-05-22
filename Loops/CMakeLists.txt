cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(nestedLoops)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nestedLoops nested_loop.cpp src/inner_loop.cpp)
add_executable(forLoops for_loop.cpp src/inner_loop.cpp src/sum_from_to.cpp src/fizz_buzz_pop.cpp)