#include <stdio.h>

void title(){
    printf("학번 : 2161110061\n");
    printf("이름 : 임동희\n");
}

void swap(int a, int b){
    
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
}

void swapNumber(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sum(int start, int end){
    int hap = 0;
    for (int i = start; i <= end; i++)
    {   
        hap += i;
    }
    printf("sum = %d\n", hap);
}

int gob(int start, int end){
    int res = 1;
    if(start > end)
        swapNumber(&start, &end);
    for (int i = start; i <= end; i++)
    {
        res *= i;
    }
    return res;
}

int gob2(int num1, int num2)
{
    if(num1 > num2)
        swapNumber(&num1, &num2);
    if(num1 == num2)
        return num1;

    return gob2(num1+1, num2) * num1;
}



void main()
{   
    int res1, res2;
    title();
    swap(10, 20);
    sum(1, 100);
    res1 = gob(1, 5);
    res2 = gob(5, 1);
    printf("곱셈1=%d\n", res1);
    printf("곱셈2=%d\n", res2);
    printf("곱셈3=%d\n", gob2(1, 5));
}





