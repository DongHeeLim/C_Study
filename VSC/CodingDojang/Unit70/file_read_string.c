#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char buffer[20] = {0, };    //fread 반드시 0으로 초기화

    FILE *fp = fopen("hello.txt", "r");

    // \n 상관없이 반드시 읽음(파일은 문자열 끝에 NULL 포함X) -> 버퍼 초기화 하는 이유( 초기화시 버퍼끝 NULL)
    //fread(버퍼, 읽기크기, 읽기횟수, 파일포인터);
    // size_t fread(void *Buffer, size_t_ElementSize, size_t_ElementCount, FILE *_Stream);
    // 성공한 읽기 횟수를 반환, 실패하면 지정된 읽기 횟수보다 작은 값을 반환
    fread(buffer, sizeof(buffer), 1, fp);

    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}