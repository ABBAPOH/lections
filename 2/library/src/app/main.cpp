#include <dynamic/dynamic.h>
#include <static/static.h>
#include <plugin/plugin.h>
#include <iostream>
#include <dlfcn.h>

void plugin_hello()
{
    void *lib = dlopen("../lib/libPlugin.dylib", RTLD_NOW);
    if (!lib) {
        std::cerr << "Can' load plugin" << std::endl;
        return;
    }

    hello_funcion func = reinterpret_cast<hello_funcion>(dlsym(lib, "hello"));
    if (!func) {
        std::cerr << "Can' resolve function" << std::endl;
        return;
    }

    func();

    dlclose(lib);
}

int main()
{
    std::cout << "main start" << std::endl;

    Dynamic d;
    Static s;
    d.hello();
    s.hello();
    plugin_hello();

    std::cout << "main end" << std::endl;

    return 0;
}
