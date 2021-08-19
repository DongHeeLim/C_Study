#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp)
{
    int size;
    int currPos = ftell(fp);    //초기 위치(현재 위치) 파일 포인터
    // printf("%d\n", currPos);  // 0

    fseek(fp, 0, SEEK_END); //끝 위치 포인터로 이동, 이동할 크기는 0
    size = ftell(fp);   // 사이즈로 놓기
    printf("%d\n", size);

    fseek(fp, currPos, SEEK_SET);   //맨 앞에서 초기 위치로 이동
    // printf("%d\n", currPos);    //0
    // printf("%d\n", SEEK_SET);   //0 이 파일에서는 같을 수있음

    return size;
}

int main()
{
    char *buffer;
    int size;

    FILE *fp = fopen("A.txt", "r");
    size = getFileSize(fp);
    buffer = malloc(size + 1);
    memset(buffer, 0, size + 1);

    fread(buffer, size, 1, fp);

    printf("%s\n", buffer);

    fclose(fp);
    free(buffer);

    return 0;
}