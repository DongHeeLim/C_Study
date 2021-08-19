//파일 부분적으로 읽기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[10] = {0, };

    FILE *fp = fopen("..\\Unit70\\hello.txt", "r");

    //Hi, there~
    fseek(fp, 2, SEEK_SET); /// 처음에서 2바이트만큼 순방향 이동 Hi까지
    fread(buffer, 3, 1, fp); // 3bytes 만큼 읽음  ',' 부터 3bytes
    printf("%s\n", buffer);

    memset(buffer, 0, 10);

    fseek(fp, 3, SEEK_CUR); // there의  h부터 3바이트 이동, r까지
    fread(buffer, 4, 1 ,fp);    //e~ 부분 읽음

    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}