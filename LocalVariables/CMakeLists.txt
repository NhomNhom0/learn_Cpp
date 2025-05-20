cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(LocalVariables)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LocalVariables main.cpp src/max.cpp src/swap.cpp)