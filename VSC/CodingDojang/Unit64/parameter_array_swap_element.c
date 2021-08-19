#include <stdio.h>

void swapElement(int arr[], int first, int second)
{
    int temp;

    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void showArray(int arr[], int index)
{
    // printf("%d\n", index);

    for (int i = 0; i < index; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    showArray(numArr, sizeof(numArr)/sizeof(int));

    swapElement(numArr, 0, 1);

    // printf("%d %d\n", numArr[0], numArr[1]);

    showArray(numArr, sizeof(numArr)/sizeof(int));

    return 0;
}