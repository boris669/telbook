project(telbook)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)

set(HEADERS parser.h)
set(SOURCES parser.c)

add_executable(telbook telbook.c ${HEADERS} ${SOURCES})
