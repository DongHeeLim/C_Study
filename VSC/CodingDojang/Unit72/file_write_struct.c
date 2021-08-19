// 구조체 바이너리 파일 쓰기 여러 자료형

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct Data             // 27바이트
{
    char c1;        // 1
    short num1;     // 2
    int num2;       // 4
    char s1[20];    // 20
};
#pragma pack(pop)

int main()
{
    struct Data d1;
    // printf("%d\n", sizeof(d1));
    memset(&d1, 0, sizeof(d1));     // 변수 내용 초기화

    d1.c1 = 'a';
    d1.num1 = 32100;
    d1.num2 = 2100000100;
    strcpy(d1.s1, "Hello, World!");

    FILE *fp = fopen("data2.bin", "wb");
    fwrite(&d1, sizeof(d1), 1, fp);
    fclose(fp);

    return 0;
}