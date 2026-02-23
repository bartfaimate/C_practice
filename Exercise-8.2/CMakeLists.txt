cmake_minimum_required(VERSION 3.16)

project("Exercise-8.2")

set (CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(/usr/include/)

set(SOURCES prog-8.2.c)

set (CMAKE_CXX_STANDARD 14)
add_executable(Exercise-8.2 ${SOURCES})