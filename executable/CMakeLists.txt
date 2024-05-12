cmake_minimum_required(VERSION 3.29)

project(dynamic)

add_executable(main src/main.c)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../library/include)