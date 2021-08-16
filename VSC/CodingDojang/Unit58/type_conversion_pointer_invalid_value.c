#include <stdio.h>
#include <stdlib.h>

int main()
{
    short* numPtr1 = malloc(sizeof(short));
    int* numPtr2;

    *numPtr1 = 0x1234;

    numPtr2 = (int*)numPtr1;

    printf("0x%x\n", *numPtr2);

    free(numPtr1);

    return 0;
}