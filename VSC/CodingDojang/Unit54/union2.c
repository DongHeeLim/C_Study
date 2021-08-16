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

    // 무조건 하나씩 해야함

    b1.candy = 10;
    printf("%d\n", b1.candy);
    b1.snack = 60000.0f;
    printf("%f\n", b1.snack);
    strcpy(b1.doll, "bear");
    printf("%s\n", b1.doll);

    return 0;
}