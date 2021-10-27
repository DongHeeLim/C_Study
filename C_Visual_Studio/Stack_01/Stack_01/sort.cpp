#include <stdio.h>

void selectionSorting() {
	int i, j, temp;
	int a[10] = { 10, 20, 90, 55, 1, 2, 80, 77, 56, 20 };
	int len = sizeof(a) / sizeof(a[0]);


	for (i = 0; i < len-1; i++)
	{
		for ( j = i+1; j < len; j++)
		{
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			
			}
		}
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
