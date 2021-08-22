// 기억 부류 지정자 사용하기
// 자동변수 사용하기    - 기존의 많이 사용했던 변수들

#include <stdio.h>

int main()
{
    auto int num1 = 10; //현재 블록이 끝나면 사라짐
    int num2 = 20; // 자동 변수(<->정적(static)변수)이면서 지역변수(<->전역변수)
    printf("%d\n", num1);

    return 0;
}