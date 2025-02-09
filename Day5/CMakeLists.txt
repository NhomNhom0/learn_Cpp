cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(Day5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Day5 main.cpp src/perimeter.cpp src/divide.cpp src/power_recursive.cpp)