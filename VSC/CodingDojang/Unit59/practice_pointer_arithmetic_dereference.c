#include <stdio.h>

int main()
{
    int numArr[5] = {11, 22, 33, 44, 55};
    int *numPtrA;
    void *ptr;

    numPtrA = &numArr[2];   // 33 주소
    ptr = numArr;

    printf("%d\n", *(numPtrA + 2));
    printf("%d\n", *((int *)ptr + 1));  // *(++(int *)ptr)

    return 0;
}