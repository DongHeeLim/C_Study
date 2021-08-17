#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Person{
    char name[20];
    int age;
} Person, *P_Person;

P_Person allocPerson()
{
    P_Person p = malloc(sizeof(Person));
    
    strcpy(p-> name, "kayle");
    p->age = 22;

    return p;
}

int main()
{
    P_Person p1;
    p1 = allocPerson();

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);

    return 0;
}