#include <stdio.h>

#define PRINT_NUM(x) printf("%d\n", x)
// #define printf    // 특정 함수에 빈 매크로로 정의하면 함수 사용 못함

int main()
{
    PRINT_NUM(15);
    PRINT_NUM(20);

    return 0;
}