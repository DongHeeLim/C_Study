#include <stdio.h>
#include "print.h"

void printArray(void** ptr, int count)  //�迭(������)�� �ּҰ����� -> ����� �ּ� -> ** 
{
    //printf("[0] :%d\n", (int)ptr[0]);
    /*printf("print %p\n", ptr);*/

    printf("{");
    for (int i = 0; i < count; i++)
    {

        if (i < count - 1)
            printf("%d, ", (int)ptr[i]); // [] = ������ �ѹ� -> ���� ����
        else
            printf("%d", (int)ptr[i]);
    }
    printf("}\n");
}