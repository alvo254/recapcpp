cmake_minimum_required(VERSION 3.19)
project(learncpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(learncpp main.cpp header_.h)
add_executable(learncpp2 stl/master.cpp)