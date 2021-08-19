#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

long long getSum(char *types, ...)
{
    va_list ap;
    va_start(ap, types);
    int i = 0;
    long long result = 0;

    while (types[i] != '\0')
    {
        switch (types[i])
        {
        case 's':
            result += atoi(va_arg(ap, char *)); // ASCII To Integer
            break;
        case 'i':
            result += va_arg(ap, int);
            break;
        default:
            break;
        }
        i++;
    }
    va_end(ap);

    return result;
}

int main()
{
    printf("%lld\n", getSum("siis", "12", 30000, 500000, "300"));
    printf("%lld\n", getSum("ssi", "150", "150", 100));

    return 0;
}