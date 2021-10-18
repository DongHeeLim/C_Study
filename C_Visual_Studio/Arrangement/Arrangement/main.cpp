#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "search.h"
#include "divide.h"
#include "array.h"

int main()
{
	int array1[3] = { 1, 2, 3 };
	int s[3][5] = {0, };

	printArray(array1, 3);

	input2ndArray(s, 3, 5);
	print2DintArray(s, 3, 5);

	//printf("%d\n", sizeof(s));						// 60
	//printf("%d\n", sizeof(s[0]));					// 20
	//printf("%d\n", sizeof(s) / sizeof(s[0]));		// 3
	//printf("%d\n", sizeof(s[0])/sizeof(s[0][0]));	// 5



	divideAlpa();
	findWord();

	return 0;
}