#include <stdio.h>

#define COUNT 10

int main()
{
    printf("%d\n", COUNT);

#undef COUNT    // 매크로 해제
#define COUNT 20

    printf("%d\n", COUNT);

    return 0;
}