#include <stdio.h>

#define PRINT_NUM3(x) printf("%d\n", x);\
                      printf("%d\n", x+1);\
                      printf("%d\n", x+2);

int main()
{
    int num1 = 1;

    if(num1 == 2)
        PRINT_NUM3(10);     //아무것도 출력되면 안됨
                            // if 밑 2개는 실행되어버림 {}필요
                            
    if(num1 == 2)
    {
        PRINT_NUM3(10);
    }    
                          
    return 0;
}