#include <stdio.h>

void helloString(char *s1)
{
    printf("Hello, %s\n", s1);
}

int main()
{
    helloString("World!");

    return 0;
}