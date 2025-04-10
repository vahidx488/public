cmake_minimum_required(VERSION 3.10)
project(proj VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main application
add_executable(proj 
    src/main.cpp 
    src/SomeClass.cpp
)

target_include_directories(proj PRIVATE src)

