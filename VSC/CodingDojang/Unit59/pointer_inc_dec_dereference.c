#include <stdio.h>

int main()
{
    int numArr[5] = {11, 22, 33, 44, 55};
    int* numPtrA;
    int* numPtrB;
    int* numPtrC;

    numPtrA = &numArr[2];
    numPtrB = numPtrA;
    numPtrC = numPtrA;

    printf("%d\n", *(++numPtrB));
    printf("%d\n", *(--numPtrC));

    return 0;
}