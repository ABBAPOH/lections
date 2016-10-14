#include "static.h"

#include <iostream>

class StaticData
{
public:

};

Static::Static() : data(new StaticData)
{

}

Static::Static(const Static &other) : data(other.data)
{

}

Static &Static::operator=(const Static &other)
{
    if (this != &other)
        data.operator=(other.data);
    return *this;
}

Static::~Static()
{

}

void Static::hello()
{
    std::cout << "Static::hello" << std::endl;
}
