#ifndef POINT_H
#define POINT_H

struct Point
{
    int x;
    int y;
};

struct Point *alloc_point();
struct Point *alloc_point_with_xy(int x, int y);
void free_point(struct Point *point);

struct Point *add_points(struct Point *lhs, struct Point *rhs);
struct Point *sub_points(struct Point *lhs, struct Point *rhs);

int manhattan_length(struct Point *point);

#endif // POINT_H
