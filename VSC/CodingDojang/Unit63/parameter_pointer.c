//반환값이 여러개일 때 포인터로 함수 밖으로 여러개의 값을 전달가능
// 예) scanf
#include <stdio.h>

void swapNumber(int *first, int *second)    //주소 교체
{
    int temp;

    temp = *first;
    *first = *second;
    *second = temp; 
}

int main()
{
    int num1 = 15;
    int num2 = 24;

    // printf("%d %d\n", num1, num2);

    swapNumber(&num1, &num2); // 메모리 주소 넣어주기

    printf("%d %d\n", num1, num2);
    
    return 0;
}