#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Person{
    char name[20];
    int age;
    char address[100];
} Person, *P_Person;

P_Person allocPerson()
{
    P_Person p = malloc(sizeof(Person));

    strcpy(p->name, "홍길동");
    p->age = 30;
    strcpy(p->address, "서울시 용산구 한남동");

    return p;
}

int main()
{
    P_Person p1;    
    Person *p2;

    p1 = allocPerson();
    p2 = allocPerson();

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);
    printf("%s\n", p1->address);

    printf("%s\n", p2->name);
    printf("%d\n", p2->age);
    printf("%s\n", p2->address);

    return 0;
}