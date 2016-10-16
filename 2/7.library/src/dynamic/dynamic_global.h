#pragma once

#if defined(DYNAMIC_LIBRARY)
#  define DYNAMICSHARED_EXPORT __declspec(dllexport)
#else
#  define DYNAMICSHARED_EXPORT __declspec(dllimport)
#endif
