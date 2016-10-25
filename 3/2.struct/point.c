#include "point.h"

#include <stdlib.h>

struct Point create_point()
{
    struct Point result;
    result.x = 0;
    result.y = 0;
    return result;
}

struct Point create_point_with_xy(int x, int y)
{
    struct Point result;
    result.x = x;
    result.y = y;
    return result;
}

struct Point sub_points(struct Point lhs, struct Point rhs)
{
    return create_point_with_xy(lhs.x - rhs.x, lhs.y - rhs.y);
}

int manhattan_length(struct Point point)
{
    return abs(point.x) + abs(point.y);
}
