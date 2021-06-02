#include <stdio.h>

int main(){

    int num1;
    char text1;

    scanf("%d", &num1);
    getchar();              //버퍼를 지워서 아래 문자 받기 가능
    scanf("%c", &text1);
    
    printf("입력한 숫자 : %d\n", num1);
    printf("입력한 문자 : %c\n", text1);

    return 0;
}