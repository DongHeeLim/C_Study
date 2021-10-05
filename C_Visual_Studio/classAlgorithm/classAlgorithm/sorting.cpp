#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "sorting.h" // visual studio에서는 안써도됨

//selection sort(Ascending)
void swapNumber(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectSort(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] > array[j]) {
				swapNumber(&array[i], &array[j]);
			}
		}
	}
}

void select_sort(int a[], int n)
{
	int min, minindex, i, j;

	for (i = 0; i < n-1; i++)	// i 를 시작 인덱스로 둠
	{
		minindex = i; // 앞 인덱스를 최소값 인덱스로 둔다.
		min = a[i]; // 앞에 있는 것을 최소값으로 잡는다
		for ( j = i + 1; j < n; j++)	// i 를 기준으로 한칸 뒤 값부터 끝까지
		{
			if (min > a[j]) {	// min(앞 인덱스)이 뒤 인덱스값보다 크면
				min = a[j];		// 뒤 인덱스값이 min이 된다. 
				minindex = j;	// 뒤 인덱스를 최소값 인덱스로 둔다.
			}
		}
		a[minindex] = a[i]; // 뒤 인덱스값에 바꿀 값(더 큰 값)을 넣는다.
		a[i] = min; // 앞 인덱스에 최소값(작은 값)을 넣는다.
	}
}

void printArray(int array[], int n) {

	printf("{ ");

	for (int k = 0; k < n - 1; k++)
	{
		printf("%d, ", array[k]);
	}

	printf("%d", array[n - 1]);

	printf(" }");
}

void bubbleSort(int array[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (array[j] > array[j+1])	// 오름차순
			{
				swapNumber(&array[j], &array[j+1]);
			}
		}
	}
}

void newbubbleSort(int array[], int n)
{
	int flag;
	//int count = 0;

	for (int i = 0; i < n - 1; i++)
	{
		flag = 0;

		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j] > array[j + 1])	// 바꿀게 있으면 계속 바꿈
			{
				swapNumber(&array[j], &array[j + 1]);
				flag = 1;
				//count++;
			}
		}
		if (flag == 0) break;	// 이미 다 바꿔서 끝나면 됨
	}
	//printf("%d\n", count);
}