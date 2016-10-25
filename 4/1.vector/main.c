#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct Data
{
    char name[255];
} Data;

typedef struct Data *DataPtr;

Data *allocData(const char *name)
{
    Data *data = malloc(sizeof(Data));
    strcpy(data->name, name);
    return data;
}

void freeData(Data *data)
{
    free(data);
}

typedef struct Vector
{
    DataPtr *data;
    size_t size;
    size_t alloc;
} Vector;

Vector *allocVector()
{
    Vector *result = (Vector *)malloc(sizeof(Vector));
    result->data = (DataPtr*)malloc(sizeof(DataPtr) * 10);
    result->size = 0;
    result->alloc = 10;
    return result;
}

void freeVector(Vector *vector)
{
    int i = 0;
    for (; i < vector->size; i++)
        freeData(vector->data[i]);
    free(vector);
}

void push_back(Vector *vector, const char *name)
{
    if (vector->size == vector->alloc) {
        vector->data = (DataPtr*)realloc(vector->data, vector->alloc * 2);
        vector->alloc *= 2;
    }
    vector->data[vector->size++] = allocData(name);
}

void pop_back(Vector *vector)
{
    if (vector->size == 0)
        return;
    freeData(vector->data[--vector->size]);
}

char *at(Vector *vector, int pos)
{
    assert(vector);
    assert(pos >= 0 && pos < vector->size);
    return vector->data[pos]->name;
}

int main()
{
    Vector *v = allocVector();
    push_back(v, "first");
    push_back(v, "second");
    push_back(v, "third");
    push_back(v, "fourth");

    int i = 0;
    for (; i < v->size; i++) {
        printf("v[%d] = %s\n", i, at(v, i));
    }

    freeVector(v);

    return 0;
}
