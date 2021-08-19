#include <stdio.h>

//포인터 배열 : 주소를 여러개 가지고 있는 배열    char* arr[3]
//배열 포인터 : 배열을 가리키는 하나의 주소       char (*arr)[3]

// 배열의 포인터, 가로가 5인 int형 배열의 주소
void print2DArray(int (*arr)[5], int col, int row)
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
    int numArr[2][5] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 }
    };

    int col = sizeof(numArr[0])/sizeof(int);
    int row = sizeof(numArr)/sizeof(numArr[0]);

    print2DArray(numArr, col, row);

    return 0;
}