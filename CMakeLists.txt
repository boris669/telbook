project(telbook)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)

set(HEADERS
        parser.h
        contact.h
        operations.h)
set(SOURCES
        parser.c
        contact.c
        operations.c)

add_executable(telbook telbook.c ${HEADERS} ${SOURCES})
