#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "~~!";
    char buffer[20] = {0, };

    FILE *fp = fopen("..\\Unit70\\hello.txt", "r+");

    fseek(fp, 9, SEEK_SET);
    fwrite(s1, strlen(s1), 1, fp);  //쓰기

    rewind(fp); // 파일 포인터를 파일의 맨처음으로 이동시킴

    fread(buffer, 20, 1, fp);   //읽기
    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}