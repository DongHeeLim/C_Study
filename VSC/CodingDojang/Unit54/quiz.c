#include <stdio.h>
#include <stdlib.h>

union Data{
    char c;
    short num1;
    int num2;
    long long int num3;
};

int main(){

    union Data* d1 = malloc(sizeof(union Data));

    return 0;
}