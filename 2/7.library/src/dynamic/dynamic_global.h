#ifndef DYNAMIC_GLOBAL_H
#define DYNAMIC_GLOBAL_H

#if defined(DYNAMIC_LIBRARY)
#  define DYNAMICSHARED_EXPORT __declspec(dllexport)
#else
#  define DYNAMICSHARED_EXPORT __declspec(dllimport)
#endif

#endif // DYNAMIC_GLOBAL_H
