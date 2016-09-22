#ifndef CLASS_H
#define CLASS_H

#include <memory>

class DynamicData;

class Dynamic
{
public:
    Dynamic();
    Dynamic(const Dynamic &);
    Dynamic &operator=(const Dynamic &);
    ~Dynamic();

private:
    std::shared_ptr<DynamicData> data;
};

#endif // CLASS_H
