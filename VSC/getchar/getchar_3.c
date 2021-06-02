#include <stdio.h>

int main(){

    char text1;
    puts("Enter Text. Include a dot('.') in a sentence to exit :");
    printf(":");
    do{
        
        text1 =getchar();     //하나씩 입력 int 반환
        putchar(text1);        //들어온 int -> char로 출력  char -> char

    }while(text1 != '.');   //text1 == '.' 이면 끝

    printf("\n");
    printf("----------------\n");
    printf("text1 : %c\n", text1);

    return 0;
}