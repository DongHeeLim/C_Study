#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory()
{
    void *ptr = malloc(sizeof(char) * 100);

    return ptr;
}

void *allocMemory2()
{
    return malloc(100);
}

int main()
{
    char *s1;

    s1 = allocMemory();
    strcpy(s1, "Uranus");
    printf("%s\n", s1);
    free(s1);

    return 0;
}