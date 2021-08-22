// 그대로 변환되는 것이라서 자료형도 입력에 따라 지정가능

#include <stdio.h>
#define SWAP(a, b, type) do{\
    type temp;  \
    temp = a;   \
    a = b;      \
    b = temp;   \
} while(0)  
//do{중괄호} while(0) 한번 실행하고 벗어나기 때문에 지역변수 역할이됨
// int temp, float temp 두개가 생기지만 충돌 X

int main()
{
    int num1 = 10;
    int num2 = 20;

    SWAP(num1, num2, int);
    printf("%d %d\n", num1, num2);

    float num3 = 1.5f;
    float num4 = 3.8f;

    SWAP(num3, num4, float);
    printf("%f %f\n", num3, num4);

    return 0;
}