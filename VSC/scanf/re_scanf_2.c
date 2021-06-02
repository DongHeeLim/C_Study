#include <stdio.h>
int main(){

    int num, a;
    scanf("%d", &num);

    while(a = getchar() != "\n" && a!= EOF);
    printf("num = %d", num);

    do{
        printf("숫자 : ");
        


    }while(!scanf("%d", &num));

    return 0;
}