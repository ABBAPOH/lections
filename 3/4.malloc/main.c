#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *array2 = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        array2[i] = array1[i];
    }

    for (int i = 0; i < 10; ++i) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    printf("===realloc===\n");

    array2 = realloc(array2, 20 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    free(array2);

    return 0;
}
