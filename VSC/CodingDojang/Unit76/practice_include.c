#include <stdio.h>

#ifndef DEBUG   //DEBUG가 매크로 정의되어 있지 않다면
#define DEBUG
#endif

#include "debug.h"

int main()
{
#if defined DEBUG && defined ENABLE_DEBUG_MESSAGE
    printf("Debug\n%s\n%s\n%s\n%d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

    return 0;
}