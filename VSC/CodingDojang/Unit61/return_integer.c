#include <stdio.h>

int one()
{
    return 1;
}

int main()
{
    int num1;
    num1 = one();

    printf("%d\n", num1);
    printf("%d\n", one());

    return 0;
}