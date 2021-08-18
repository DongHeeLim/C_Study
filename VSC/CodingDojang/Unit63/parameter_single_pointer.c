// 에러
// 값이 아닌 포인터를 얻어오기

#include <stdio.h>
#include <stdlib.h>

void allocMemory(void *ptr, int size)
{
    ptr = malloc(size);
}

int main()
{
    long long *numPtr = NULL;

    allocMemory(numPtr, sizeof(long long));

    *numPtr = 10;
    printf("%llu\n", *numPtr);

    free(numPtr);

    return 0;
}