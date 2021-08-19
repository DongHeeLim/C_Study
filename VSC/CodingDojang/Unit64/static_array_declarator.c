#include <stdio.h>

void printArr(int arr[static 5], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int numArr1[5] = {1, 2, 3, 4, 5};
    int numArr2[3] = {1, 2, 3};

    printArr(numArr1, sizeof(numArr1)/sizeof(int));
    printArr(numArr2, sizeof(numArr1)/sizeof(int));

    return 0;
}