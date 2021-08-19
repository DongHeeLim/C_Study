#include <stdio.h>
#include <stdarg.h>

void printString(int args, ...)
{
    va_list ap;
    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        char *str = va_arg(ap, char *);
        printf("%s ", str);
    }
    va_end(ap);
    printf("\n");
}

int main()
{
    printString(2, "C", "Language");
    printString(3, "The", "Little", "Prince");

    return 0;
}