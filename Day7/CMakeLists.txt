cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(Day7)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Day7 
            main.cpp 
            src/menu.cpp 
            src/nested_for_loop.cpp 
            src/for_count.cpp
            src/while_count.cpp
            src/do_while_count.cpp)