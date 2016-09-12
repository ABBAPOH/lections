#include "point.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    struct Point *p1 = alloc_point_with_xy(10, 20);
    struct Point *p2 = alloc_point_with_xy(20, 30);
    struct Point *p3 = sub_points(p2, p1);

    printf("Point (%d, %d)\n", p1->x, p1->y);
    printf("Point (%d, %d)\n", p2->x, p2->y);
    printf("length = %d\n", manhattan_length(p3));

    free_point(p1);
    free_point(p2);
    free_point(p3);
    return 0;
}
