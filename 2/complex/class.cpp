#include "class.h"

class ClassData
{
public:

};

Class::Class() : data(new ClassData)
{

}

Class::Class(const Class &other) : data(other.data)
{

}

Class &Class::operator=(const Class &other)
{
    if (this != &other)
        data.operator=(other.data);
    return *this;
}

Class::~Class()
{

}
