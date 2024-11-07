#!/bin/bash

# Check if the argument is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <folder_name>"
  exit 1
fi

# Create the main folder
mkdir -p "$1"

mkdir -p "$1/build"
# Create subdirectories
mkdir -p "$1/src" "$1/include" "$1/tests"

# Create and write to the CMakeLists.txt file
cat <<EOL > "$1/CMakeLists.txt"
# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project($1)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
file(GLOB SOURCES "src/*.cpp")

# Include directories
include_directories(include)

# Add executable
add_executable($1 \${SOURCES})
EOL

echo "Project structure created successfully."