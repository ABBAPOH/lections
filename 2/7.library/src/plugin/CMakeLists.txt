set (SOURCES plugin.cpp plugin.h plugin_global.h)

add_definitions("-DPLUGIN_LIBRARY")

add_library(Plugin SHARED ${SOURCES})

install(TARGETS Plugin RUNTIME DESTINATION ${LIBRARY_DESTINATION})
