#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int high,low;
    int remainder;
    int GCD,LCM;        //GCD = 최대공약수, LCM = 최소 공배수
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2)
    {
        high = num1;
        low = num2;
    }
    else
    {
        high = num2;
        low = num1;
    }
    
    remainder = high % low;

    while (remainder != 0)
    {
        high = low;
        low = remainder;
        remainder = high % low;

    }
    
    GCD = low;
    LCM = (num1 * num2)/GCD;
    printf("GCD = %d, LCM = %d", GCD, LCM);

    return 0;
}