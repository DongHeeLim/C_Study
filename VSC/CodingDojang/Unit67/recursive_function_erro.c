//stack overflow error
#include <stdio.h>

void hello()
{
    printf("Hello, World\n");
    hello();
}

int main()
{
    hello();

    return 0;
}