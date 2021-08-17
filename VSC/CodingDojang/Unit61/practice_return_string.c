#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void *getName() 도 가능
char *getName()
{
    char *str = malloc(sizeof(char) * 20);

    strcpy(str, "Mars");

    return str;
}

int main()
{
    char *name;

    name = getName();

    printf("%s\n", name);

    free(name);

    return 0;
}