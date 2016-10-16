set (SOURCES main.cpp)

add_executable(app ${SOURCES})

target_link_libraries(app Dynamic)
target_link_libraries(app Static)
