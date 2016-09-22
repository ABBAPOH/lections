set (SOURCES main.cpp)

add_executable(complex ${SOURCES})

target_link_libraries(complex Dynamic)
target_link_libraries(complex Static)
