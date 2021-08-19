#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s1[10];
    int num1;

    FILE *fp = fopen("hello.txt", "r");

    //fscanf(파일포인터, 서식, 변수의주소1, 변수의주소2, ...);
    //int fscanf(FILE *const_Stream, char const *const_Format, ...);
    // 성공하면 읽어온 값의 개수를 반환, 실패하면 EOF(-1)를 반환
    fscanf(fp, "%s %d", s1, &num1);

    printf("%s %d\n", s1, num1);

    fclose(fp);
    
    return 0;
}