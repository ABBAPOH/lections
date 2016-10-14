#ifndef CLASS_H
#define CLASS_H

#include <memory>

class ClassData;

class Class
{
public:
    Class();
    Class(const Class &);
    Class &operator=(const Class &);
    ~Class();

private:
    std::shared_ptr<ClassData> data;
};

#endif // CLASS_H
