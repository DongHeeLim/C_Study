#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//삼중포인터, 행렬에 대한 주소
void allocMatrix(short ***ptr, int *height, int *length, int elementSize)
{
    //2차원 배열 할당 , 역참조, 세로공간
    *ptr = malloc(sizeof(void *) * (*height)); 
    // printf("*ptr1 = %p\n", *ptr);   // *ptr == matrix 배열명은 포인터
    printf("세로 : %d\n",sizeof(void *) * 3);   //12
    printf("short : %d\n", elementSize);  //2
    printf("가로 : %d\n", elementSize * 3);  //6

    // 3줄로 나누기, 가로공간
    for(int i = 0; i<*height; i++)
    {   
        (*ptr)[i] = malloc(elementSize * (*length));    // (*ptr) 역참조 먼저 한 후 [i] 세로 공간에 접근
        // printf("%d : %p\n", i,(*ptr)[i]);   //4 할당은 포인터에
    }
    printf("동적 할당은 포인터에 %d\n", sizeof((*ptr)[1]));

    // printf("%d\n", **ptr);  // 같은주소
    // printf("%d\n", ptr[0][0]);  // 같은 주소
    // printf("%d\n", *ptr);  // 같은주소
    // printf("%d\n", ptr[0]);  // 같은 주소
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
    int sum = 5;
    for (int i = 0; i < *height; i++)
    {
        for (int j = 0; j < *length; j++)
        {
            sum += 5;
            (*ptr)[i][j] = sum;
        }
    }
    // printf("*ptr2 = %p\n", *ptr);
}

void showMatrix(short ***ptr, int *height, int *length)
{
    for (int i = 0; i < *height; i++)
    {
        for (int j = 0; j < *length; j++)
        {
            printf("%d ", (*ptr)[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    short **matrix; // 2차행렬 이중포인터
    int height = 3;
    int length = 3;

    allocMatrix(&matrix, &height, &length, sizeof(short));

    getNumber(&matrix, &height, &length);

    // printf("matrix = %p\n", matrix);
    showMatrix(&matrix, &height, &length);

    // printf("%d\n", sizeof(matrix[0][0]));   // 2 short형 이중 포인터  => short자료형인 2차 배열


    freeMatrix(&matrix, &length);

    return 0;
}