#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


	int bin[20] = { 0 };
	int dec = 45;
	int i,j, mok, nmg;
	double k;
	int sum = 0;

	for ( i = 0; i < 20; i++)
	{
		mok = dec / 2;
		nmg = dec % 2;

		bin[19 - i] = nmg;
		if (mok == 0) break;
		dec = mok;
	
	}
	for ( i = 0; i < 20; i++)
	{
		printf("%d", bin[i]);
	}
	printf("\n");

	for ( i = 0; i < 20; i++)
	{
		j = 19 - i;
		k = pow((double)2, (double)j);
		sum += bin[i] * (int)k;
	}

	printf("10Áø¼ö = %d\n", sum);

	return 0;
}