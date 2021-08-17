#include <stdio.h>

int main()
{
    char* cPtr1 = NULL;
    short* numPtr1 = NULL;
    long long* numPtr2 = NULL;

    printf("%p\n", cPtr1 + 1);
    printf("%p\n", numPtr1 + 1);
    printf("%p\n", numPtr2 + 1);

    return 0;
}