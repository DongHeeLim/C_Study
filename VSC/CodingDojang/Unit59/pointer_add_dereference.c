#include <stdio.h>

int main(){

    int numArr[5] = {11, 22, 33, 44, 55};
    int* numPtrA;

    numPtrA = numArr;

    printf("%d\n", *(numPtrA + 1));
    printf("%d\n", *(numPtrA + 2));
    printf("%d\n", *(numPtrA) + 1);
    printf("%d\n", *(numPtrA) + 2);

    return 0;
}