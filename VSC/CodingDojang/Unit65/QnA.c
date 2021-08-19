#include <stdio.h>

void generateString(char buffer[], char *str)
{
    printf("%d\n", sizeof(buffer));
    sprintf(buffer, "%s", str);
    printf("%d\n", sizeof(buffer));
}

int main()
{
    char buffer[20];
    char *str = "Hello, World!";

    generateString(buffer, str);

    return 0;
}