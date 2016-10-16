#pragma once

#include "dynamic_global.h"

#include <memory>

class DynamicData;

class DYNAMICSHARED_EXPORT Dynamic
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
