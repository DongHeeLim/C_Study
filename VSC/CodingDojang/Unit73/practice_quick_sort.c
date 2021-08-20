#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b)
{
    return strcmp((char *)a, (char *)b);    // 문자열 비교 1, -1, 0
}

void showArray(char arr[][8], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

//배열 포인터
void showArray2(char (*arr)[8], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main()
{
    char s1[10][8] = { 
        "india", "delta", "bravo", "kilo", "alfa",
        "echo", "hotel", "juliett", "golf", "charlie"
    };  //[개수]][크기]

    int count = sizeof(s1)/sizeof(s1[0]);
    // printf("%d\n", count);   //10
    // printf("%s\n", s1[0]);
    // printf("%d\n", sizeof(s1[9]));  // 8bytes

    qsort(s1, count, sizeof(s1[0]), compare);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%s ", s1[i]);
    // }
    showArray(s1, count);
    showArray2(s1, count);

    return 0;
}