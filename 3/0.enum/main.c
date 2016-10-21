#include <stdio.h>
#include <unistd.h>

enum Flags {
    NoFlags = 0,
    CharCount = 0x1,
    WordCount = 0x2,
    LineCount = 0x4,
    Help = 0x8,
};

enum Flags parseArguments(int argc, char *argv[])
{
    enum Flags result = NoFlags;

    int opt = 0;
    while ((opt = getopt(argc, argv, "mlwh")) != -1) {
        switch (opt) {
        case 'm':
            result |= CharCount;
            break;
        case 'l':
            result |= LineCount;
            break;
        case 'w':
            result |= WordCount;
            break;
        case 'h':
            result |= Help;
            break;
        default:
            break;
        }
    }

    return result;
}

const char * flagToString(enum Flags flag)
{
    switch (flag) {
    case CharCount: return "CharCount";
    case LineCount: return "LineCount";
    case WordCount: return "WordCount";
    default:
        break;
    }
    return "";
}

int main(int argc, char *argv[])
{
    enum Flags flags = parseArguments(argc, argv);

    if (flags & Help) {
        printf("Usage: enum [-m] [-l] [-w]\n");
        return 0;
    }

    printf("flags:\n");
    for (int i = CharCount; i != LineCount; i <<= 1) {
        if (flags & i)
            printf("%s\n", flagToString(i));
    }

    return 0;
}
