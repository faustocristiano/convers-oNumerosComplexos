cmake_minimum_required(VERSION 3.17)
project(complexo C)

set(CMAKE_C_STANDARD 99)

target_link_libraries(complexo m)

add_executable(main.c)