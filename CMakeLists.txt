cmake_minimum_required(VERSION 3.0.0)

project(main)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include/logger)
include_directories(${PROJECT_SOURCE_DIR}/include/utils)
#include_directories(${PROJECT_SOURCE_DIR}/include/thread)
#include_directories(${PROJECT_SOURCE_DIR}/include/threadPool)
#include_directories(${PROJECT_SOURCE_DIR}/include/reactor)
#include_directories(${PROJECT_SOURCE_DIR}/include/view)
#include_directories(${PROJECT_SOURCE_DIR}/include/controller)

add_definitions("-g")

add_subdirectory(src)