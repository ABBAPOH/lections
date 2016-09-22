#include <dynamic/dynamic.h>
#include <iostream>

int main()
{
    std::cout << "main start" << std::endl;
    Dynamic d;
    d.hello();
    std::cout << "main end" << std::endl;
    return 0;
}
