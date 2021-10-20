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
	for (int i = 0; i < n-1; i++)	// 버블 횟수
	{
		for (int j = 0; j < n-1-i; j++)		// 바꿀 위치들
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
	int count = 0;

	for (int i = 0; i < n - 1; i++)	// 버블 횟수
	{
		flag = 0;

		for (int j = 0; j < n - 1 - i; j++)		// 바꿀 위치 범위(큰 것 뒤로 보내고 앞에 것끼리), if문 없어도 돌긴 함
		{
			if (array[j] > array[j + 1])	// 바꿀게 있으면 계속 바꿈 (오름 차순, 큰 것을 뒤쪽으로)
			{
				swapNumber(&array[j], &array[j + 1]);
				flag = 1;
				count++;
			}
		}
		if (flag == 0) break;	// 남은 것들끼리 이미 다 바꿔서 끝나면 됨(for문 탈출)
	}
	printf("%d\n", count);
}

//int a[5] = { 70, 30, 15, 20, 10 };
void insertSort(int array[], int len)
{
	int i, j, key;
	for (i = 1; i < len; i++)
	{
		key = array[i];
		printf("%d\n", key);
		for (j = i-1; j >= 0; j--)
		{
			if (array[j] > key) {
				array[j + 1] = array[j];
			}
			else break;
			
		}
		array[j + 1] = key;
		
	}

}