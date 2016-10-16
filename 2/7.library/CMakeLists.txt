cmake_minimum_required(VERSION 2.8)

project(library)

if (WIN32)
    set(LIBRARY_DESTINATION bin) # we install libraries to bin/ on Windows
else()
    set(LIBRARY_DESTINATION lib)
endif()

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${LIBRARY_DESTINATION})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_subdirectory(src)
