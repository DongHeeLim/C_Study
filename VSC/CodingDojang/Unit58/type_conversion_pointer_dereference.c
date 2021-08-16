#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* numPtr = malloc(sizeof(int));
    char* cPtr;

    *numPtr = 0x12345678;
    
    printf("0x%x\n", *(char*)numPtr);   //1byte 변환하고 역참조하여 값 출력

    free(numPtr);

    return 0;
}