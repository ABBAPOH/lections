#include "dynamic.h"

#include <iostream>

class DynamicData
{
public:

};

Dynamic::Dynamic() : data(new DynamicData)
{

}

Dynamic::Dynamic(const Dynamic &other) : data(other.data)
{

}

Dynamic &Dynamic::operator=(const Dynamic &other)
{
    if (this != &other)
        data.operator=(other.data);
    return *this;
}

Dynamic::~Dynamic()
{

}

void Dynamic::hello()
{
    std::cout << "Dynamic::hello" << std::endl;
}
