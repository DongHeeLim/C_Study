// 오름, 내림 차순 음수 양수 같음 만 구분하면 됨

#include <stdio.h>
#include <stdlib.h> //qsort 함수 선언된 헤더 파일

//const void* : 상수를 가리키는 포인터
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;   
}

int compare_descending(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

void showArray(int *arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };

    int count = sizeof(numArr)/sizeof(int);

    // 배열, 개수, 요소 크기, 비교함수
    qsort(numArr, count, sizeof(int),compare);
    showArray(numArr, count);

    qsort(numArr, count, sizeof(int),compare_descending);
    showArray(numArr, count);

    return 0;
}