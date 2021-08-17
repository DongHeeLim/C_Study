#include <stdio.h>

float sub(float f1, float f2)
{
    return f1 - f2; 
}

int main()
{
    float num1;
    num1 = sub(1.0f, 0.1f);

    printf("%f\n", num1);

    return 0;
}