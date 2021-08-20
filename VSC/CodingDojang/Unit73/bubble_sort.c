#include <stdio.h>

void bubble_sort(int *arr, int count)
{
    int temp;
    int n=0;

    for (int i = 0; i < count; i++) //좌우로만 바뀌는 것이라 10번 비교
    {
        for (int j = 0; j < count -1; j++)  // 간격이 10-1칸
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                n++;
                
            }
            
        }
        
    }
    printf("%d\n", n);
    
}

int main()
{   
    int numArr[10] = {8, 4, 2, 5, 3, 7, 10, 1, 6, 9};

    bubble_sort(numArr, sizeof(numArr)/sizeof(int));

    for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return 0;
}