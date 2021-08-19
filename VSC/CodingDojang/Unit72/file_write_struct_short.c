// 구조체 바이너리 파일 쓰기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체 크기 2, 4, 8, 16  -> 1bytes 씩으로 정렬  6bytes 크기이렇게 할 수있음  
#pragma pack(push, 1)   // 1byte 크기로 정렬
struct Data{
    short num1;
    short num2;
    short num3;
    short num4;
};
#pragma pack(pop)

int main()
{
    struct Data d1;

    d1.num1 = 100;
    d1.num2 = 200;
    d1.num3 = 300;
    d1.num4 = 400;

    FILE *fp = fopen("data.bin", "wb");

    fwrite(&d1, sizeof(d1), 1, fp);

    printf("%d\n", sizeof(void*));

    fclose(fp);

    return 0;
}