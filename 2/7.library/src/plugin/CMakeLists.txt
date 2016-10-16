set (SOURCES plugin.cpp plugin.h plugin_global.h)

add_definitions("-DPLUIGN_LIBRARY")

add_library(Plugin SHARED ${SOURCES})
