#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Hi, there~";

    FILE *fp = fopen("hello.txt", "w");
    // fwrite(버퍼, 쓰기크기, 쓰기횟수, 파일포인터)
    // size_t write(void const *_Buffer, size_t_ElementSize, size_t_ElementCount, FILE *_Stream);
    // 성공한 쓰기 횟수를 반환, 실패하면 지정된 쓰기 횟수보다 작은 값을 반환
    fwrite(s1, strlen(s1), 1, fp);
    fwrite(s1, strlen(s1), 1, stdout);

    fclose(fp);

    return 0;
}