cmake_minimum_required(VERSION 3.28)

project(player LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# ADD MinimalSocket LIBRARY


# Set source files
set(SOURCE_FILES
    punteros.cpp
)

add_executable(programexa ${SOURCE_FILES})

