#include <stdio.h>

void printNumber(int count)
{   
    if(count == 4)
        return;

    printf("%d\n", count);

    printNumber(++count);
}

int main()
{
    int count = 1;

    printNumber(count);

    return 0;
}