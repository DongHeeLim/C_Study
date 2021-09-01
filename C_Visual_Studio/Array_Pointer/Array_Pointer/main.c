#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include "input.h"

void allocArray(void **ptr, int size)
{
    *ptr = malloc(size);  // 역참조 = 배열에 동적할당
}


int main()
{
    int* arr1;
    int count = 10;
    int size = sizeof(int) * count;

    allocArray((void **)&arr1, size); // 주소값(포인터) 받음
    
    inputNumber((void **)arr1, count);

    printArray((void **)arr1, count);

    countEven((void **)arr1, count);

    free(arr1); 

    return 0;
}