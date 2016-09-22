#include <dynamic/dynamic.h>
#include <static/static.h>
#include <iostream>

int main()
{
    std::cout << "main start" << std::endl;
    Dynamic d;
    Static s;
    d.hello();
    s.hello();
    std::cout << "main end" << std::endl;
    return 0;
}
