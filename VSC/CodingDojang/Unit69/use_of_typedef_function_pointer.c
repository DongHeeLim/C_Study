#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

typedef int (*FP)(int, int);    // 반환값의 자료형이 int 인 함수 포인터

typedef struct _Calc{
    FP fp;                  // 구조체 맴버
}Calc, *PCalc;

void executer(FP fp)    // 매개변수
{
    printf("%d\n", fp(70, 80));
}

int main()
{
    FP fp1;     //변수 선언
    fp1 = add;
    printf("%d\n", fp1(10, 20));

    FP fp[10];  // 배열 선언
    fp[0] = add;
    printf("%d\n", fp[0](30, 40));

    Calc c;     //구조체 선언
    c.fp = add;
    printf("%d\n", c.fp(50, 60));

    executer(add);

    return 0;
}