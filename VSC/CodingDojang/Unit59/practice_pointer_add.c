#include <stdio.h>

int main()
{
    int *numPtrA = NULL;

    printf("%p\n", numPtrA + 2);
    printf("%p\n", numPtrA + 5);

    return 0;
}