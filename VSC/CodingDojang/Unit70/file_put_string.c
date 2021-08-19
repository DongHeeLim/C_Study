#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *fp = fopen("hello.txt", "w");

    // 서식 없이 그대로 쓰기
    //int fputs(char const* _Buffer, FILE *_Stream);
    // 성공 음수가 아닌 값, 실패하면 EOF(-1) 반환  
    fputs("Hello, World!", fp);

    fclose(fp);

    return 0;
}