// void 포인터는 포인터 연산 불가능

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void* ptr = malloc(100);

    printf("%p\n", ptr);
    // printf("%p\n", ptr + 1);

    free(ptr);

    return 0;
}