cmake_minimum_required(VERSION 3.24)
project(Project3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project3
        covid.cpp
        covid.h
        "main.cpp"
        State.cpp
        State.h
        Year.cpp
        Year.h)
