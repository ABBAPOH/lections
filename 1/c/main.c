#include <stdio.h>

FILE **allocFiles(int size)
{
    FILE ** result = malloc(sizeof(FILE *) * (size + 1));
    result[size] = 0;
    return result;
}

void freeFiles(FILE **files)
{
    free(files);
}

int main(int argc, char *argv[])
{
    int count = 0;
    FILE **files = 0;
    if (argc == 1) {
        count = 1;
        files = allocFiles(count);
        files[0] = stdin;
    } else {
        count = argc - 1;
        files = allocFiles(count);
        int i;
        for (i = 1; i < argc; ++i) {
            files[i - 1] = fopen(argv[1], "r");
        }
    }

    int i;
    for (i = 0; i < count; ++i) {
        FILE *file = files[i];
        if (!file) {
            printf("error opening file %s", argv[i + 1]);
            continue;
        }
        char buffer[1024];
        size_t size = 0;
        while ((size = fread(buffer, 1, 1024, file))) {
            buffer[size+1] = 0;
            printf("%s", buffer);
        }
        fclose(file);
    }

    freeFiles(files);

    return 0;
}
