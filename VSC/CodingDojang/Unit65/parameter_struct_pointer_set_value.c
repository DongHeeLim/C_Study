#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
    char address[100];
};

void setPerson(struct Person *p)
{
    strcpy(p->name, "gogildong");
    p->age = 40;
    strcpy(p->address, "Seoul");
}

int main()
{
    struct Person p1;

    strcpy(p1.name, "Hong");
    p1.age = 30;
    strcpy(p1.address, "Seoul YongSan");

    setPerson(&p1);

    // setPerson에서 변경한 값이 출력됨
    printf("이름: %s\n", p1.name);       
    printf("나이: %d\n", p1.age);      
    printf("주소: %s\n", p1.address);

    return 0;
}