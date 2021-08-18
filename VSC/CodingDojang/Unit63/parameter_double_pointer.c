#include <stdio.h>
#include <stdlib.h>

void allocMemory(void **ptr, int size)
{
    *ptr = malloc(size);    //역참조-> 주소 ->함수 밖 사용가능
}

int main()
{
    long long *numPtr;

    allocMemory((void **)&numPtr, sizeof(long long));

    *numPtr = 10;
    printf("%lld\n", *numPtr);

    free(numPtr);
}