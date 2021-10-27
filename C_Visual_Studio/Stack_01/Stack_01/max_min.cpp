#include <stdio.h>

void findMaxMin() {
	int max, min;
	int a[10] = { 10, 20, 90, 55, 1, 2, 80, 77, 56, 20 };
	int len = sizeof(a) / sizeof(a[0]);

	max = min = a[0];

	for (int i = 0; i < len; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}

	printf("max = %d\n", max);
	printf("min = %d\n", min);

}