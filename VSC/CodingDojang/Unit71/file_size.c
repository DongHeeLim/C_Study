#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fseek(파일포인터, 이동할크기, 기준점);
// 성공 0, 실패 -1

//ftell(파일포인터);
//파일 포인터 현재 위치 반환, 실패 -1

int main()
{
    int size;

    // 구조체 FILE
    FILE *output_fp = fopen("..\\Unit70\\hello.txt", "r");

    fseek(output_fp, 0, SEEK_END);  // 파일 포인터를 파일의 끝으로 이동
    size = ftell(output_fp);    //파일 포인터의 현재 위치를 얻음

    printf("%d\n", size);

    fclose(output_fp);

    return 0;
}

//SEEK_SET 처음으로 이동
//SEEK_CUR 현재 위치
//SEEK_END 끝부분으로 이동