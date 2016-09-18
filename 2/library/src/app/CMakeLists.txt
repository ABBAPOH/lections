set (SOURCES main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(complex ${SOURCES})

target_link_libraries(complex Library)
