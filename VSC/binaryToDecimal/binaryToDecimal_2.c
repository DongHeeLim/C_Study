#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//이진수 여러자리 다 확인 가능해야함
int main(){

    char* binary;
    binary = malloc(sizeof(int)*1024);
    int length = strlen(binary);
    int flag;
    char buffer;

    scanf("%d", binary);
    printf("%d", binary);

    free(binary);
    return 0;
}