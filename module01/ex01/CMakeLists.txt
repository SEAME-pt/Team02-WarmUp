# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(module01/ex01)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
file(GLOB SOURCES "src/*.cpp")

# Include directories
include_directories(include)

# Add executable
add_executable(car ${SOURCES})
