#include <stdio.h>

void helloString(char *s1)
{
    printf("Hello, %s\n", s1);
}

int main()
{
    char s1[10] = "World!";

    helloString(s1);

    return 0;
}