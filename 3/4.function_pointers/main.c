#include <stdio.h>
#include <stdlib.h>

int int_sorter(const void *lhs, const void *rhs)
{
    int first = *(int*)lhs;
    int second = *(int*)rhs;
    if (first < second)
        return -1;
    else if (first == second)
        return 0;
    else
        return 1;
}

int main()
{
    int array[10];
    int i;
    /* fill array */
    for (i = 0; i < 10; ++i) {
        array[i] = 10 - i;
    }

    qsort(array, 10, sizeof(int), int_sorter);
    for (i = 0; i < 10; ++i) {
        printf("%d\n", array[i]);
    }

    return 0;
}
