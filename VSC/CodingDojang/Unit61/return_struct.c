// 구조체가 커지면 구조체 + 구조체복사부분 -> 동적할당으로

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 라이브러리
struct Person{      // 사람 구조체
    char name[20];
    int age;
    char address[100];
};

//개발자
struct Person getPerson()   // Person 구조체 반환 함수 정의
{
    struct Person p;

    strcpy(p.name, "홍길동");
    p.age = 30;
    strcpy(p.address, "서울시 용산구 한남동");

    return p;
}

int main()
{
    struct Person p1;

    p1 = getPerson();

    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);

    return 0;
}