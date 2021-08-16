#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* numPtr = malloc(sizeof(int));  //4bytes 메모리 할당
    char* cPtr; // 1byte

    *numPtr = 0x12345678;   // 역참조
    printf("0x%x\n", *numPtr);
    cPtr = (char*)numPtr;   // 변환하여 메모리 주소 저장 char* ->1byte
    printf("0x%x\n", *cPtr);    //낮은 자리수 1byte 0x78

    free(numPtr);

    return 0;
}