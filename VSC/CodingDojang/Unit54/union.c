#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//공용체 union : 가장 큰 자료형의 공간을 공유함
union Box{
    short candy;    //2
    float snack;    //4
    char doll[8];   //8
};

int main(){

    union Box b1;

    printf("%d\n", sizeof(b1)); // 가장 큰 자료형 8 

    strcpy(b1.doll, "bear");

    printf("%d\n", b1.candy);
    printf("%f\n", b1.snack);
    printf("%s\n", b1.doll);

    return 0;
}