#include <stdio.h>

#define MUL(a, b) a * b
#define ADD(a, b) a + b

int main()
{
    printf("%d\n", MUL(10, 20));
    printf("%d\n", MUL(1 + 2, 3 + 4));  // 11 , 1 + 2*3 + 4  곱 먼저 계산

    printf("%d\n", ADD(1, 2));      
    printf("%d\n", ADD(1, 2) * 3);  // 1 + 2 * 3  = 7,  a + b * c 곱 먼저 계산

    return 0;
}