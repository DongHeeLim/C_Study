#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef union _Box{
    short candy;
    float snack;
    char doll[8];
} Box;

int main(){

    Box b1;
    Box* ptr;

    ptr = &b1;

    strcpy(ptr->doll, "bear");

    printf("%d\n", ptr->candy);
    printf("%f\n", ptr->snack);
    printf("%s\n", ptr->doll);

    return 0;
}