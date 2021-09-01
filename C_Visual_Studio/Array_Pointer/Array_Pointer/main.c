#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include "input.h"

void allocArray(void **ptr, int size)
{
    *ptr = malloc(size);  // ������ = �迭�� �����Ҵ�
}


int main()
{
    int* arr1;
    int count = 10;
    int size = sizeof(int) * count;

    allocArray((void **)&arr1, size); // �ּҰ�(������) ����
    
    inputNumber((void **)arr1, count);

    printArray((void **)arr1, count);

    countEven((void **)arr1, count);

    free(arr1); 

    return 0;
}