#pragma once

#include <memory>

class StaticData;

class Static
{
public:
    Static();
    Static(const Static &);
    Static &operator=(const Static &);
    ~Static();

    void hello();

private:
    std::shared_ptr<StaticData> data;
};
