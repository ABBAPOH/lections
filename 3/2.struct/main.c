#include "point.h"

#include <stdio.h>

int main(void)
{
    struct Point p1 = create_point_with_xy(10, 20);
    struct Point p2 = create_point_with_xy(20, 30);
    struct Point p3 = sub_points(p2, p1);

    printf("Point (%d, %d)\n", p1.x, p1.y);
    printf("Point (%d, %d)\n", p2.x, p2.y);
    printf("length = %d\n", manhattan_length(p3));

    return 0;
}
