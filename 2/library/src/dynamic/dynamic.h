#pragma once

#include <memory>

class DynamicData;

class Dynamic
{
public:
    Dynamic();
    Dynamic(const Dynamic &);
    Dynamic &operator=(const Dynamic &);
    ~Dynamic();

    void hello();

private:
    std::shared_ptr<DynamicData> data;
};
