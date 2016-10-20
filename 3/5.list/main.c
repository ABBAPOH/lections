#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char name[255];
    struct Node *next;
};

int main()
{
    struct Node *second = malloc(sizeof(struct Node));
    strcpy(second->name, "second");
    second->next = 0;

    struct Node *first = malloc(sizeof(struct Node));
    strcpy(first->name, "first");
    first->next = second;

    struct Node *current = first;
    while (current) {
        printf("name = %s\n", current->name);
        current = current->next;
    }

    return 0;
}
