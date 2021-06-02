#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num1;
    int size = 10;
    int bin[10] = { 0, };
    int count = 0;
    int remainder, subscript;
    scanf("%d", &num1);

    while (num1 != 0)
    {
        remainder = num1 % 2;
        num1 /= 2;
        count++;
        subscript = size - count;
        bin[subscript] = remainder;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", bin[i]);
    }

    return 0;
}