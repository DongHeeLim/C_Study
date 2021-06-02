#include <stdio.h>

int main(){

    int num1;
    char text1;

    scanf("%d", &num1);
    scanf("%c", &text1);   //앞에 \n 이 버퍼에 남아있음

    printf("%c\n", text1);  // "\n" 이 출력

    return 0;
}