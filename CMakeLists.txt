cmake_minimum_required(VERSION 3.3)
project(AppBundler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp functions.cpp functions.h default.h appAdd.cpp)
add_executable(AppBundler ${SOURCE_FILES})