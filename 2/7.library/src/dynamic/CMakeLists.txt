set (SOURCES dynamic.cpp dynamic.h dynamic_global.h)

# neede for correct exports (see dynamic_global.h)
add_definitions("-DDYNAMIC_LIBRARY")

add_library(Dynamic SHARED ${SOURCES})

install(TARGETS Dynamic RUNTIME DESTINATION ${LIBRARY_DESTINATION} LIBRARY DESTINATION ${LIBRARY_DESTINATION})
