cmake_minimum_required(VERSION 3.5)

project(2048 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(2048 2048.cpp)

target_link_directories(2048 INTERFACE "${CMAKE_CURRENT_BINARY_DIR}")
