#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "fun.h"
#include "sorting.h"

int main()
{


	int a[5] = { 70, 30, 15, 20, 10 };
	//int a[5] = { 10, 20, 30, 20, 50 };
	int size = sizeof(a)/sizeof(int);
	//selectSort(a, size);
	//bubbleSort(a, size);
	/*newbubbleSort(a, size);*/
	//select_sort(a, size);
	insertSort(a, size);
	printArray(a, size);


	//free(numPtr);
	return 0;
}