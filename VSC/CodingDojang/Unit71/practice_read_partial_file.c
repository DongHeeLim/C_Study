#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 데이터 크기(바이트)를 읽는 함수
// 가져올 버퍼, 순방향 이동크기, 읽을 사이즈, 파일포인터
int readData(char *buffer, int offset, int size, FILE *fp)
{
    int count;

    //문장의 끝이면 나가도록 설정
    if(feof(fp) == 1)
        return 0;

    fseek(fp, offset, SEEK_SET);
    count = fread(buffer, sizeof(char), size, fp);

    return count;
}

int main()
{
    char buffer[10] = {0, };
    int count;

    FILE *fp = fopen("A.txt", "r");

    count = readData(buffer, 2, 4, fp);

    printf("%s<- count : %d\n", buffer, count);

    fclose(fp);

    return 0;
}