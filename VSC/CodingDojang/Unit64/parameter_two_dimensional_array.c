#include <stdio.h>

// 배열은 포인터임므로 주소만 옴 , 실제 크기를 위해 가로, 세로 크기 받아야함
//[] 세로크기 무시 -> 2차원만 나타냄, 가로크기는 평시 필요
void print2DArray(int arr[][5], int col, int row)   
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int numArr[2][5] = {{1,2,3,4,5},
                        {6,7,8,9,10}};
    
    printf("%d\n", sizeof(numArr));     //40
    printf("%d\n", sizeof(numArr[0]));  //20
    printf("%d\n", sizeof(int));        //4


    int col = sizeof(numArr[0])/sizeof(int);    // 5 
    int row = sizeof(numArr)/sizeof(numArr[0]); // 2

    print2DArray(numArr, col, row);

    return 0;
}