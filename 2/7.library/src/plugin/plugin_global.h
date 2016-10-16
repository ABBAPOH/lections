#ifndef PLUGIN_GLOBAL_H
#define PLUGIN_GLOBAL_H

#if defined(PLUIGN_LIBRARY)
#  define PLUIGN_SHARED_EXPORT __declspec(dllexport)
#else
#  define PLUIGN_SHARED_EXPORT __declspec(dllimport)
#endif

#endif // PLUGIN_GLOBAL_H
