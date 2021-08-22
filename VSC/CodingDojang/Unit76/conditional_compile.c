// 매크로 정의 조건부 컴파일

#include <stdio.h>

#define DEBUG       // 매크로 정의

int main()
{

// DEBUG 매크로가 정의되어 있다면 
// #ifdef #endif 사이의 코드 컴파일
// 정의되어 있지 않다면 이 부분 컴파일X
#ifdef DEBUG
    printf("%DEBUG: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

    return 0;
}

