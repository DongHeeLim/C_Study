#include <stdio.h>

union Data{
    char c1;    // 1
    short num1; // 2
    int num2;   // 4
};

int main(){

    union Data d1;

    d1.num2 = 0x12345678;   //리틀 엔디언 78 56 34 12

    printf("0x%x\n", d1.num2);
    printf("0x%x\n", d1.num1);  // 앞 2바이트
    printf("0x%x\n", d1.c1);    // 앞 1바이트

    printf("%d\n", sizeof(d1)); // 가장 큰 자료형
    return 0;
}