cmake_minimum_required(VERSION 3.27)

project(leetcode)

set(CMAKE_CXX_STANDARD 17)

set(key_optimizations "-Ofast")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${key_optimizations}")

add_subdirectory(task_1)