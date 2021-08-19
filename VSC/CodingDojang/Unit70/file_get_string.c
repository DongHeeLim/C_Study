#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char buffer[20];    //파일 읽을 때 사용할 임시 공간

    FILE *fp = fopen("hello.txt", "r");

    //fgets(버퍼, 버퍼크기, 파일포인터);
    // char *fgets(char *_Buffer, int_MaxCount, FILE *_Streams);
    // 성공하면 읽은 문자열의 포인터를 반환, 실패하면 NULL 을 반환
    fgets(buffer, sizeof(buffer), fp);  //  --->> \n까지 읽음
    fputs(buffer, stdout);

    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}