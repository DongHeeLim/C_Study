#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//삼중포인터 행렬에 대한 주소
void allocMatrix(short ***ptr, int *height, int *length, int elementSize)
{
    // 역참조(한 번) 동적할당(크기는 높이만큼 )
    *ptr = malloc(sizeof(void *) * (*height));

    // 높이 X 길이
    for(int i = 0; i<*height; i++)
    {
        (*ptr)[i] = malloc(elementSize * (*length));
    }

    // printf("%d\n", **ptr);  //주소
    // printf("%d\n", ptr[0][0]);  //주소
}

void freeMatrix(short ***ptr, int *height)
{
    for (int i = 0; i < *height; i++)
    {
        free((*ptr)[i]);
    }
    
    free(**ptr);
}

void getNumber(short ***ptr, int *height, int *length)
{
    // printf("height = %d\n", *height); // 3
    // printf("length = %d\n", *length); // 3
    int sum = 0;
    for (int i = 0; i < *height; i++)
    {
        printf("i : %d\n", i);
        for (int j = 0; j < *length; j++)
        {
            printf("j : %d\n", j);
            *ptr[i][j] = sum;
            // printf("%p\n", *ptr[i][j]);
            printf("%d\n", *ptr[i][j]);
            sum += 5;
        }
    }
}

void showMatrix(short ***ptr, int *height, int *length)
{
    for (int i = 0; i < *height; i++)
    {
        for (int j = 0; j < *length; j++)
        {
            printf("%d\n", *ptr[i][j]);
        }
    }
}


int main()
{
    short **matrix; // 2차행렬 이중포인터
    int height = 3;
    int length = 3;

    allocMatrix(&matrix, &height, &length, sizeof(short));

    getNumber(&matrix, &height, &length);

    // showMatrix(&matrix, &height, &length);
    // matrix[0][2] = 10;
    // matrix[1][1] = 20;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; i++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }
    
    freeMatrix(&matrix, &length);

    return 0;
}