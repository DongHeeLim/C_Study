//경고뜸

#include <stdio.h>

int *ten()
{
    int num1 = 10;      //지역 변수라서 함수가 끝나면 사라짐

    return &num1;
}

int main()
{
    int *numPtr;
    numPtr = ten();

    printf("%d\n", *numPtr);

    return 0;
}