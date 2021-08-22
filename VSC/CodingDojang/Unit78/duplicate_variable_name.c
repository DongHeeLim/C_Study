#include <stdio.h>

int num1 = 10;

int main()
{
    int num1 = 20;
    {
        int num1 = 30;
        printf("%d\n", num1);
    }
    printf("%d\n", num1);
    
    return 0;
}