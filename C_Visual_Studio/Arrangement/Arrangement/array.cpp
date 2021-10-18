#include <stdio.h>


int* printArray(int* array, int length) {

	//printf("%d\n", *array);  첫번째 값 가져옴

	for (int i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return array;
}

void input2ndArray(int (* array)[5], int row, int col) {

	int cnt = 0;

	//printf("%d\n", sizeof(array)); // int* 라서 4bytes
	//printf("%d\n", sizeof(*array));	// 20
	//printf("%d\n", sizeof(array[0])); // 20
	//printf("%d\n", sizeof(*array[0])); // 4
	//printf("%d\n", sizeof(array[0][0])); // 4
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array[i][j] = ++cnt;
		}
	}
}

void print2DintArray(int (* array)[5], int row, int col) {

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%5d ", array[i][j]);
		}
		printf("\n");
	}

}



//void show2Array(void *a[], int type, int len) {
//
//	int row = sizeof(a) / sizeof(a[0]);
//	int col = sizeof(a[0]) / sizeof(a[0][0]);
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s ", a[i]);
//	}
//}
