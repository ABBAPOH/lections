#pragma once

#if defined(PLUGIN_LIBRARY)
#  define PLUGIN_SHARED_EXPORT __declspec(dllexport)
#else
#  define PLUGIN_SHARED_EXPORT __declspec(dllimport)
#endif
