cmake_minimum_required(VERSION 3.10)

project(DuplicateSlidingWindow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header files
include_directories(include)

# Library for duplicate checker
add_library(DuplicateChecker
    src/DuplicateChecker.cpp
)

# Executable
add_executable(slidingwindow
    src/main.cpp
    src/DuplicateChecker.cpp
)

# Link library
target_link_libraries(main_app DuplicateChecker)
