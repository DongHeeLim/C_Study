#include <stdio.h>
#include "print.h"

void printArray(void** ptr, int count)  //배열(포인터)의 주소가져옴 -> 행렬의 주소 -> ** 
{
    //printf("[0] :%d\n", (int)ptr[0]);
    /*printf("print %p\n", ptr);*/

    printf("{");
    for (int i = 0; i < count; i++)
    {

        if (i < count - 1)
            printf("%d, ", (int)ptr[i]); // [] = 역참조 한번 -> 값이 나옴
        else
            printf("%d", (int)ptr[i]);
    }
    printf("}\n");
}