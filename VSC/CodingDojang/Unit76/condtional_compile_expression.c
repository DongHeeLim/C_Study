// 값 또는 식으로 조건부 컴파일

#include <stdio.h>

#define DEBUG_LEVEL 2   // 2를 DEBUG_LEVEL로 정의

int main()
{
#if DEBUG_LEVEL >=2
    printf("Debug Level 2\n");
#endif

#if 1   // 조건이 항상 참
    printf("1\n");
#endif

#if 0   //조건이 항상 거짓
    printf("0\n");
#endif

    return 0;
}