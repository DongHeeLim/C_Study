#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

//GCC에서는 char 실행 X -> int 로 (int 보다 작을 땐 int)
// char, bool -> int
//short -> int
// float -> double

// int(i), double(d), char(c), char *(s) <-string

void printValue(char *types, ...)
{
    va_list ap;
    int i = 0;
    va_start(ap, types);

    while(types[i] != '\0')
    {
        switch(types[i])
        {
        case 'i':
            printf("%d ", va_arg(ap, int));
            break;
        case 'd':
            printf("%f ", va_arg(ap, double));
            break;
        case 'c':
            // printf("%c ", va_arg(ap, char));
            printf("%c ", va_arg(ap, int)); //GCC char -> int 로 
            break;
        case 's':
            printf("%s ", va_arg(ap, char *));
            break;
        default:
            break;
        }
        i++;
    }
    va_end(ap);
    printf("\n");
}

int main()
{
    printValue("i", 10);
    printValue("ci", 'a', 10);
    printValue("dci", 1.234567, 'a', 10);
    printValue("sicd", "Hello, World!", 10, 'a', 1.234567);

    return 0;
}