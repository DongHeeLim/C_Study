#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer;
    int size;
    int count;

    FILE *fp = fopen("..\\Unit70\\hello.txt", "r");

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);   // 파일포인터 현재(끝) 위치 = 파일크기

    // 파일 문자열 -> C언어 문자열
    buffer = malloc(size + 1);  // +1  -> 문자열 마지막 NULL

    memset(buffer, 0, size + 1);    // 메모리 0으로 초기화

    fseek(fp, 0, SEEK_SET); //파일 포인터 파일 처음으로 이동

    //반환값 읽은 횟수
    count = fread(buffer, size, 1, fp); // 파일 크기만큼 값을 읽음 

    printf("%s size: %d, count: %d\n", buffer, size, count);
    
    fclose(fp);

    free(buffer);

    return 0;
}