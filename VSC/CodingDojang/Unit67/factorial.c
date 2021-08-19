#include <stdio.h>

int factorial(int num)
{
    if(num == 1)
        return 1;

    return factorial(num-1) * num;
}

int main()
{   
    printf("%d\n", factorial(5));

    return 0;
}