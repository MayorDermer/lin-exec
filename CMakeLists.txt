cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(lin-exec LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

FILE(GLOB_RECURSE SRC_FILES src/*.cpp)

include_directories(src/)

add_executable(${PROJECT_NAME} main.cpp ${SRC_FILES})
