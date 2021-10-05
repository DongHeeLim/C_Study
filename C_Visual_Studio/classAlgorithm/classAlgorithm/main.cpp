#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "fun.h"
#include "sorting.h"

int main()
{
	int ptrSize = 10;
	int* numPtr = (int*)malloc(sizeof(int) * ptrSize);

	int num, flag, buffer;
	
	do
	{
		flag = 0;
		printf("숫자를 입력해주세요 : ");
		if (!scanf_s("%d", &num)) {
			printf("숫자가 아닙니다. ");
			flag = 1;
			while (buffer = getchar() != '\n');	//문자열은 \n 붙음, ; <- 그대로 끝내기
			//printf("%d\n", buffer); 
		}
	} while (flag);

	int a[5] = { 70, 30, 15, 20, 10 };
	int size = sizeof(a)/sizeof(int);
	//selectSort(a, size);
	//bubbleSort(a, size);
	//newbubbleSort(a, size);
	select_sort(a, size);
	printArray(a, size);


	free(numPtr);
	return 0;
}