#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Person{
    char name[20];
    int age;
}Person, *PPerson;

int main()
{
    PPerson p1 = malloc(sizeof(Person));
    void* ptr;

    strcpy(p1->name, "고길동");
    p1->age = 40;

    ptr = p1;

    printf("%s %d\n", ((PPerson)ptr)->name, ((Person*)ptr)->age);

    free(p1);

    return 0;
}