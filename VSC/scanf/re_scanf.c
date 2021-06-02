#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int a, num = 0;
    while(1)
    {
        printf("숫자 입력 : ");
        num = scanf_s("%d", &num);
        while(getchar() != '\n' && a !=EOF);

        if(num == 1)
        {
            break;
        }

    }

    printf("%d\n", num);

    return 0;
}