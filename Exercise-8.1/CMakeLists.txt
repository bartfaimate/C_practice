cmake_minimum_required(VERSION 3.16)

project(PROG8-1)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(/usr/include/)

set(SOURCES prog-8.1.c)

set (CMAKE_CXX_STANDARD 14)
add_executable(PROG8-1 ${SOURCES})