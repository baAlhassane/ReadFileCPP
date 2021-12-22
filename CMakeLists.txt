cmake_minimum_required(VERSION 3.21)
project(ReadFileCPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ReadFileCPP
        ReadFile.cpp
        ReadFile.h
        main.cpp)
