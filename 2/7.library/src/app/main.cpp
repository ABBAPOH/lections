#include <dynamic/dynamic.h>
#include <static/static.h>
#include <plugin/plugin.h>
#include <iostream>

#if WIN32
#  include <Windows.h>
#else
#  include <dlfcn.h>
#endif

void pluginHello()
{
#ifdef WIN32
    HMODULE lib = LoadLibrary("Plugin.dll");
#else
    void *lib = dlopen("../lib/libPlugin.dylib", RTLD_NOW);
#endif
    if (!lib) {
        std::cerr << "Can' load plugin" << std::endl;
        return;
    }

#ifdef WIN32
    hello_funcion func = reinterpret_cast<hello_funcion>(GetProcAddress(lib, "hello"));
#else
    hello_funcion func = reinterpret_cast<hello_funcion>(dlsym(lib, "hello"));
#endif
    if (!func) {
        std::cerr << "Can' resolve function" << std::endl;
        return;
    }

    func();

#ifdef WIN32
    FreeLibrary(lib);
#else
    dlclose(lib);
#endif
}

int main()
{
    std::cout << "main start" << std::endl;

    Dynamic d;
    Static s;
    d.hello();
    s.hello();
    pluginHello();

    std::cout << "main end" << std::endl;

    return 0;
}
