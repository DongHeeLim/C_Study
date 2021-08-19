#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

typedef int (*FP)(int, int);    // FP를 함수 포인터 별칭으로 정의

FP getAdd() // 함수 포인터 별칭을 반환값으로 지정
{
    return add;
}

int main()
{
    printf("%d\n", getAdd()(10, 20));

    return 0;
}