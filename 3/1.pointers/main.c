#include <stdio.h>
#include <string.h>

void reverse(char *s, int len)
{
    char *begin = s;
    char *end = s + len - 1;
    while (begin < end) {
        char tmp = *begin;
        *begin = *end;
        *end = tmp;
        begin++;
        end--;
    }
}

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        char *s = argv[i];
        reverse(s, strlen(s));
        printf("%s\n", s);
    }

    return 0;
}
