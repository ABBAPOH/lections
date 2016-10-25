#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char name[255];
    struct Node *next;
};

struct Node *createNode(const char *name, struct Node *parent)
{
    struct Node *result = (struct Node *)malloc(sizeof(struct Node));
    strcpy(result->name, name);
    result->next = 0;
    if (parent)
        parent->next = result;
    return result;
}

void printList(struct Node *node)
{
    while (node) {
        printf("name = %s\n", node->name);
        node = node->next;
    }
}

int main()
{
    struct Node *first = createNode("first", 0);
    struct Node *second = createNode("second", first);
    struct Node *third = createNode("third", second);
    struct Node *fourth = createNode("fourth", third);

    printList(first);

    return 0;
}
