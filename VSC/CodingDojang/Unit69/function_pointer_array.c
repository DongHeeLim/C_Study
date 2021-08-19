#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int funcNumber;
    int num1, num2;
    int (*fp[4])(int, int); //함수 포인터 배열 선언

    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div;

    // int (*fp[4])(int, int) = {add, sub, mul, div}; // 위에 것 한줄로 초기화

    printf("함수 번호와 계산할 값을 입력하세요: ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);

    printf("결과 값 : %d\n", fp[funcNumber](num1, num2));

    //모든 함수 호출
    for (int i = 0; i < sizeof(fp)/sizeof(fp[0]); i++)
    {
        printf("결과 값 : %d\n", fp[i](num1, num2));
    }
    
    return 0;
}