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
		printf("���ڸ� �Է����ּ��� : ");
		if (!scanf_s("%d", &num)) {
			printf("���ڰ� �ƴմϴ�. ");
			flag = 1;
			while (buffer = getchar() != '\n');	//���ڿ��� \n ����, ; <- �״�� ������
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