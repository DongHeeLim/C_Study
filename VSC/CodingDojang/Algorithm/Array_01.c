#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


// void inputNumber(void **ptr)
// {
//     int num = 0;
//     int flag = 0;
//     int wholesize = 0;

//     do
//     {
//       printf("array[%d] 값을 입력하세요 :", wholesize);
//       scanf("%d", &num);

//       if (num == 110)
//       {
//         break;
//       }
//       else
//       {
//         flag = 1;
//         printf("%d\n", num);
//       }
//       ptr[wholesize] = num;
//       wholesize++;

//     }while(flag);
// }


void allocArray(void **ptr, int size)
{
  *ptr = malloc(size);  // 역참조 = 배열에 동적할당
  printf("%p\n", *ptr);
}

void printArray(void **ptr, int count)  //배열(포인터)의 주소가져옴
{
  printf("pa %p\n", *ptr);

  for (int i = 0; i < count; i++)
  {
  
    printf("[%d] : %d\n", i, ptr[i]); // [] = 역참조 한번 -> 값이 나옴
  }
}


int main()
{
    int *arr1;
    int count = 10;
    int size = sizeof(int) * count;

    allocArray((void **)&arr1, size); // 주소값 받음
    printf("할당 %p\n", arr1);
    arr1[0] = 10;
    printf("[0] %p\n", arr1[0]);
    arr1[1] = 9;
    printf("[1] %p\n", arr1[1]);
    arr1[2] = 8;
    printf("[2] %p\n", arr1[2]);
    arr1[3] = 7;
    arr1[4] = 6;
    arr1[5] = 5;
    arr1[6] = 4;
    arr1[7] = 3;
    arr1[8] = 2;
    arr1[9] = 1;

    printArray((void *)arr1, count);  // 1차 포인터 형 변환
    printf("%p\n", arr1);
    
    free(arr1);

    return 0;
}