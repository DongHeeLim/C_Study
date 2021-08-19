#include <stdio.h>

typedef struct _Calc{
    int (*fp)(int, int);    //함수 포인터를 구조체 맴버로 지정
}Calc, *PCalc;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    Calc c;

    c.fp = add; // add 함수의 메모리 주소를 구조체 c의 맴버에 저장

    printf("%d\n", c.fp(10, 20));   //구조체 맴버로 add 함수 호출

    return 0;
}