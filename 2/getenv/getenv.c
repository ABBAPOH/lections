#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    if (argc < 2) {
        fprintf(stderr, "getenv: Too few arguments\n");
        fprintf(stderr, "Usage: getenv <variable>\n");
        return 1;
    }

    char * var = getenv(argv[1]);
    if (var == NULL) {
        printf("'%s' not found\n", argv[1]);
        return 0;
    }
    printf("'%s=%s' found\n", argv[1], var);
    return 0;
}
