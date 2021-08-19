//리터럴 방식
// 생성이 편함, 다만 한줄이 복잡함, 포인터 접근 X
#include <stdio.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

void printPerson(struct Person *p)
{
    printf("이름: %s\n", p->name);
    printf("나이: %d\n", p->age);
    printf("주소: %s\n", p->address);
}

int main()
{
    printPerson(&(struct Person){.name ="HONG", .age = 30, .address = "Seoul"});

    printf("\n");

    printPerson(&(struct Person){"GO", 40, "Seocho"});

    return 0;
}

