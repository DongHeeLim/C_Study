#include <stdio.h>

int main()
{
    char s1[10];
    
    for (int i = 0; i < sizeof(s1)/sizeof(char); i++)
    {
        s1[i] = 97 + i;

    }
    for (int i = 0; i < sizeof(s1)/sizeof(char); i++)
    {
        printf("%c ", s1[i]);
    }

    return 0;
}