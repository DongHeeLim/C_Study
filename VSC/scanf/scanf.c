#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 공간의 값 0으로  초기화 -> calloc(메모리크기에 추가할 곱, 기본 메모리 크기),realloc (대상, 변화할 메모리 크기) 
#include <string.h>


int main(){
    // int a;  // 정수
    // printf("리턴 값 %d", scanf("%d", &a));  //scanf a에 정수를 입력
    char** texthouse = calloc(1024, sizeof(char));
    char* textbox = (char*)calloc(1024, sizeof(char)); //void* 명시적 형변환
    
    texthouse = &textbox;
    printf("숫자(형식 : 문자) 입력 : ");
    scanf("%s", textbox);

    // textbox = "10";  포인터는 배열(안쪽에 char 한글자씩)
    int length = strlen(textbox);
    printf("문자열 길이 %d\n", length);
    printf("문자열 하나 : %c\n", textbox[0]);     //문자 하나라서  char 형식
    printf("문자열 하나 : %c\n", textbox[1]);
    printf("포인터     : %s\n", textbox);
    printf("이중포인터 : %s\n", texthouse[0]); //box의 주소를 가지고옴


    for (int i = 0; i < length; i++)    //문자 -> 숫자
    {
        printf("%d", (int)textbox[i] - 48 );
    }
    

    // printf("입력 : ");
    // scanf("%s", &textbox[0]);
    // printf("%s\n", textbox[0]);

    // printf("%d\n", '0');//문자 0은 숫자로 48 (아스키 코드)
    // printf("%d\n", '0' - 48);//문자 0은 숫자로 48 (아스키 코드)
    // printf("%d\n", (int)'0');//문자 0은 숫자로 48 (아스키 코드)
    // printf("%d", 0);//문자 0은 숫자로 48 (아스키 코드)
    //value reference (값) / (주소, 참조)
    free(texthouse);
    free(textbox);
    
    return 0;
}


