#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char* binary;
    binary = malloc(sizeof(char)*1024);
    scanf("%s", binary);                //2진법 입력
    int length = strlen(binary);
    int binary_array[10] = {0,};
    int subscript;
    int count = 0;

    printf("%s\n", binary);
    printf("%d\n", binary[0]);          // 아스키 코드값으로 읽힘
    printf("%c\n", binary[0]);          // 문자 '1'
    printf("%d\n", (int)binary[0] );    // 아스키코드
    //0~9 ->  48~57 아스키 코드 범위


    for (int i = 0; i < length; i++)
    {
//        binary_array[i] = atoi(&binary[i]);
        count++;
        subscript = length - count;
//        printf("%d\n", binary_array[i]);
//        binary_array[subscript] = binary[i];
//        printf("%d\n", (int)binary_array[subscript]);
        
    }
    





    free(binary);

    return 0;
}