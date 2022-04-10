cmake_minimum_required(VERSION 3.11)

project(ranges_build_issue)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})

message(STATUS "Module path: ${CMAKE_MODULE_PATH}")
message(STATUS "Build directory: ${CMAKE_BINARY_DIR}")

find_package(range-v3 REQUIRED)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(ranges_build_issue main.cpp)
target_link_libraries(ranges_build_issue
    PRIVATE
        range-v3::range-v3
)