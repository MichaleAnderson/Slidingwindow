cmake_minimum_required(VERSION 3.10)

project(SlidingWindow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header files
include_directories(include)

# Create executable
add_executable(main_app
    src/main.cpp
    src/DuplicateChecker.cpp
)
