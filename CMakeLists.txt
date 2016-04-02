cmake_minimum_required(VERSION 3.3)
project(TaskAppBuilder_C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c main.h includes/uthash/uthash.h)
add_executable(TaskAppBuilder_C ${SOURCE_FILES} main.c main.h)