#pragma once

#if defined(PLUIGN_LIBRARY)
#  define PLUIGN_SHARED_EXPORT __declspec(dllexport)
#else
#  define PLUIGN_SHARED_EXPORT __declspec(dllimport)
#endif
