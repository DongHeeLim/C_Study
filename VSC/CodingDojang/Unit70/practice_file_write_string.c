#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "안녕하세요";

    FILE *fp = fopen("hello.txt", "w");

    // fputs(s1, fp);
    fwrite(s1, strlen(s1), 1, fp);

    fclose(fp);

    return 0;
}