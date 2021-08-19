#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *fp = fopen("hello.txt", "w"); //파일 포인터

    fprintf(fp, "%s %d\n", "Hi~!", 100);
    fprintf(stdout, "%s %d\n", "Hi~!", 100);

    fclose(fp);

    return 0;
}