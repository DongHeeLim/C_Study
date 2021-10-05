#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "sorting.h" // visual studio������ �Ƚᵵ��

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

	for (i = 0; i < n-1; i++)	// i �� ���� �ε����� ��
	{
		minindex = i; // �� �ε����� �ּҰ� �ε����� �д�.
		min = a[i]; // �տ� �ִ� ���� �ּҰ����� ��´�
		for ( j = i + 1; j < n; j++)	// i �� �������� ��ĭ �� ������ ������
		{
			if (min > a[j]) {	// min(�� �ε���)�� �� �ε��������� ũ��
				min = a[j];		// �� �ε������� min�� �ȴ�. 
				minindex = j;	// �� �ε����� �ּҰ� �ε����� �д�.
			}
		}
		a[minindex] = a[i]; // �� �ε������� �ٲ� ��(�� ū ��)�� �ִ´�.
		a[i] = min; // �� �ε����� �ּҰ�(���� ��)�� �ִ´�.
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
			if (array[j] > array[j+1])	// ��������
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
			if (array[j] > array[j + 1])	// �ٲܰ� ������ ��� �ٲ�
			{
				swapNumber(&array[j], &array[j + 1]);
				flag = 1;
				//count++;
			}
		}
		if (flag == 0) break;	// �̹� �� �ٲ㼭 ������ ��
	}
	//printf("%d\n", count);
}