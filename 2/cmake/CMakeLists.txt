cmake_minimum_required(VERSION 2.8)

project(app)

set(SOURCES src/main.cpp src/class.cpp)
if (UNIX)
    set(CMAKE_CXX_FLAGS "-std=c++11")
endif()

add_executable(app ${SOURCES})
