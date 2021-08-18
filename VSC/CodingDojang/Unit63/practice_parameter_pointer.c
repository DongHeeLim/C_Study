#include <stdio.h>

int getNumber(int *num1, int *num2)
{
    *num1 = *num1 + 10;
    *num2 = *num2 + 20;

    return *num1 + *num2;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    result = getNumber(&num1, &num2);

    printf("%d %d %d\n", num1, num2, result);

    return 0;
}