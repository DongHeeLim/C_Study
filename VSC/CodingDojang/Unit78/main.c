#include <stdio.h>

int num1 = 10;

void printGlobal()
{
    printf("%d\n", num1);
}

int main()
{
    printf("%d\n", num1);
    num1 = 20;
    printGlobal();

    return 0;
}