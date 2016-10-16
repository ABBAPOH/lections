cmake_minimum_required(VERSION 2.8)

project(app)

if (NOT(MSVC))
    set(CMAKE_CXX_FLAGS "-std=c++11")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SOURCES src/main.cpp src/class.cpp)
add_executable(app ${SOURCES})

install(TARGETS app RUNTIME DESTINATION bin)
