#include <stdio.h>

#define CONCAT(a, b) a##b   // 붙이기

int main()
{
    printf("%d\n", CONCAT(1, 2));

    return 0;
}