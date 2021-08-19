// 함수 포인터 : 리턴값 출력등 함수 자체를 주소로 받아 사용가능

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hello()
{
    printf("Hello, ");
}

void numberToString(int n, char *buffer)
{
    sprintf(buffer, "%d", n);   // 포인터, 서식, 값1, 값2 ...
}

int main()
{
    void (*fp1)();
    void (*fp2)(int, char *);
    char buffer[20];

    fp1 = hello;
    fp2 = numberToString;

    fp1();
    fp2(100, buffer);
    printf("%s\n", buffer);


    return 0;
}