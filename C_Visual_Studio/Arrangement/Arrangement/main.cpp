#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "search.h"
#include "divide.h"

int main()
{
	int s[3][5];
	int i, j;
	int cnt = 0;
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s[0]));
	printf("%d\n", sizeof(s) / sizeof(s[0]));
	printf("%d\n", sizeof(s[0])/sizeof(s[0][0]));

	int row = sizeof(s) / sizeof(s[0]);
	int col = sizeof(s[0]) / sizeof(s[0][0]);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			s[i][j] = ++cnt;	
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%5d ", s[i][j]);
		}
		printf("\n");
	}
	
	//divideAlpa();
	//findWord();

	return 0;
}