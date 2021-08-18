// 바뀌지 않음  parameter는 전달이 끝나면 사용X

#include <stdio.h>

void swapNumber(int first, int second)
{
    int temp;

    temp = first;
    first = second;
    second = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    swapNumber(num1, num2);

    printf("%d %d\n", num1, num2);

    return 0;
}