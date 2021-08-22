#include <stdio.h>
// 컴파일 직전에 처리, 전처리기 과정을 거치면서 ARRAY_SIZE -> 10
#define ARRAY_SIZE 10
#define DEFAULT_ARRAY_SIZE ARRAY_SIZE


int main()
{
    char s1[ARRAY_SIZE];
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        s1[i] = 97 + i;

    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%c ", s1[i]);
    }

    return 0;
}