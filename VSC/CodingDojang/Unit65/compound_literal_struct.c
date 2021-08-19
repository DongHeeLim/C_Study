#include <stdio.h>

struct Person{
    char name[20];
    int age;
    char address[100];
};

void printPerson(struct Person p)
{
    printf("이름 : %s\n", p.name);
    printf("나이 : %d\n", p.age);
    printf("주소 : %s\n", p.address);
}

int main()
{
    printPerson((struct Person){.name = "홍길동", .age = 25, .address = "서울"});

    printf("\n");

    printPerson((struct Person){"고길동", 40, "경기"});

    return 0;
}