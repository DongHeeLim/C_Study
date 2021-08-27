#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void inputNumber(int *arr)
{
    int num = 0;
    int flag = 0;
    int wholesize = 0;


    do
    {
      printf("array[%d] 값을 입력하세요 :", wholesize);
      scanf("%d", &num);

      if (num == 110)
      {
        break;
      }
      else
      {
        flag = 1;
        printf("%d\n", num);
      }
      arr[wholesize] = num;
      wholesize++;

    }while(flag);
    
}


void allocArray(char *arr, int n)
{
  int *arr1 = malloc(sizeof(int) * n);
}

void freeAlloc(int *arr)
{
  free(arr);
}



int main()
{
    allocArray("arr1", 10);

    freeAlloc(arr1);

    return 0;
}