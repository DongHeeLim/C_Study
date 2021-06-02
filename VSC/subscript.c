// 팀장 잘가 나는말이야 이미테이션게임볼거야 
// 둘이서 딕셔너리 잘해봐 나는 이제 간다 
// 그거 알아????????
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int num1;
    int size = 10;
    int bin[10] = {0, };
    int count = 0;
    int remainder, subscript;
    scanf("%d", &num1);

    while(num1 !=0)
    {
        remainder = num1 % 2;
        num1 /= 2;
        count ++;
        subscript = size - count;
        bin[subscript] = remainder;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", bin[i]);
    }
    
    return 0;
}