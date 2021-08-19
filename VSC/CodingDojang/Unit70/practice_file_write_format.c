#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s1[10] = "x 30 y 20";

    FILE *fp = fopen("position.txt", "w");

    fputs(s1, fp);

    fclose(fp);

    return 0;
}