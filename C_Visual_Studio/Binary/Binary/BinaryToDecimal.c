#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char* binary;
    binary = malloc(sizeof(char)*10);
    scanf("%s", binary);
    printf("%d\n", strlen(binary));
    printf("%s\n", binary);


    int* number;
    number = malloc(sizeof(int));
    scanf("%d", number);
    printf("%d\n", *number);

    free(binary);
    free(number);

    return 0;
}