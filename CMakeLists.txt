cmake_minimum_required(VERSION 3.30)
project(labyrinth)

set(CMAKE_CXX_STANDARD 23)

add_executable(labyrinth main.cpp
        search.cpp
        search.h
        labyrinth.cpp
        labyrinth.h)
