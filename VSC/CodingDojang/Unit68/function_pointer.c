#include <stdio.h>

void hello()
{
    printf("Hello, world!\n");
}

void bonjour()
{
    printf("bonjour le monde!\n");
}

int main()
{
    void (*fp)();   // 반환값과 매개변수가 없는 함수 포인터 선언

    fp = hello;
    fp();

    fp = bonjour;
    fp();

    return 0;
}