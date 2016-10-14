#include "point.h"

#include <stdlib.h>

struct Point *alloc_point()
{
    struct Point *result = malloc(sizeof (struct Point));
    result->x = 0;
    result->y = 0;
    return result;
}

struct Point *alloc_point_with_xy(int x, int y)
{
    struct Point *result = malloc(sizeof (struct Point));
    result->x = x;
    result->y = y;
    return result;
}

void free_point(struct Point *point)
{
    free(point);
}

struct Point *add_points(struct Point *lhs, struct Point *rhs)
{
    return alloc_point_with_xy(lhs->x + rhs->x, lhs->y + rhs->y);
}

struct Point *sub_points(struct Point *lhs, struct Point *rhs)
{
    return alloc_point_with_xy(lhs->x - rhs->x, lhs->y - rhs->y);
}

int manhattan_length(struct Point *point)
{
    return abs(point->x) + abs(point->y);
}
