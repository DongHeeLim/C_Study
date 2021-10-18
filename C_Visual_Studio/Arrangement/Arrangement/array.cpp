#include <stdio.h>




void showArray() {
	
}



void show2Array(void *a[], int type, int len) {

	int row = sizeof(a) / sizeof(a[0]);
	int col = sizeof(a[0]) / sizeof(a[0][0]);

	for (int i = 0; i < len; i++)
	{
		printf("%s ", a[i]);
	}
}
