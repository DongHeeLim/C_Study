#include <stdio.h>

int main()
{
    int numArr[5] = {11, 22, 33, 44, 55};
    int* numPtrA;
    int* numPtrB;
    int* numPtrC;

    numPtrA = numArr;   //첫 번째 요소의 주소를 포인터에 저장
    numPtrB = numPtrA + 1;  
    numPtrC = numPtrA + 2;

    printf("%d\n", *numPtrB);   //역참조22
    printf("%d\n", *numPtrC);   //역참조33

    return 0;
}