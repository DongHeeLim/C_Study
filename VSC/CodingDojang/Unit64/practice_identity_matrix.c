#include <stdio.h>

// void setIdentityMatrix(float (*arr)[4] ,int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if( i == j)
//             {
//                 arr[i][j] = 1.0f;
//             }
//         }
        
//     }
    
// }

void setIdentityMatrix(float (*arr)[4] ,int col)
{
    for (int i = 0; i < col; i++)
    {
        arr[i][i] = 1.0f;
    }
    
}

int main()
{
    float matrix[4][4] = {0.0f, };
    
    int col = sizeof(matrix[0])/sizeof(float);
    int row = sizeof(matrix)/sizeof(matrix[0]);

    setIdentityMatrix(matrix, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}