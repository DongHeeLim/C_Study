#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int number, buffer, flag;
    
    
 //   while(buffer = getchar() != '\n' && buffer != EOF);
 //   printf("number = %d", number);

    do
    {
        flag = 0;
        
        printf("숫자를 입력해주세요 : ");
        if (!scanf("%d", &number))          //입력값 숫자면 1 -> 0되어서 넘어감 , 그외의 것 0 ->1 되어서 계속 진행
        {
            flag = 1;                                                // 개행 및 EOF 면 while문 탈출 (즉 버퍼에 getchar()로 마지막을 채움)
            while (buffer = getchar() != '\n' && buffer != EOF);    // 버퍼 마지막이 개행(\n) 이나 EOF(end of file) 이 아니라면 계속 
        }
        
    } while (flag);
    


    return 0;
}
