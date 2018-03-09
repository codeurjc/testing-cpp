cmake_minimum_required(VERSION 2.8.2)
project(ejercicio1)

enable_testing()

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)
add_subdirectory(tests)

add_executable(ejercicio1 main.cpp)
