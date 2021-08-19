#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    //실제로는 메가바이트 단위로 버퍼 만듬
    char buffer[5] = {0, }; //문자열 4 + NULL 1 바이트 읽을 예정
    int count = 0;
    int total = 0;
    //"Please, close the door."  23bytes 
    FILE *fp = fopen("A.txt", "r");

    //feop(파일포인터);
    // 끝이면 1 아니면 0을 반환
    //마지막에는 3bytes 읽고 1 반환  while 탈출
    while (feof(fp)==0)
    {
        count = fread(buffer, sizeof(char), 4, fp); //1byte 씩 4번
        printf("%s", buffer);   
        memset(buffer, 0, sizeof(buffer));   //NULL까지 5bytes 

        total += count;
    }

    printf("\ntotal : %d\n", total);    //파일 읽은 전체 크기 출력

    fclose(fp);

    return 0;
}