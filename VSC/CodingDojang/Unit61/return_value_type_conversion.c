#include <stdio.h>

float onePointOne()
{
    return 1.1f;
}

int main()
{
    int num1;

    num1 = (int)onePointOne();

    printf("%d\n", num1);

    return 0;
}