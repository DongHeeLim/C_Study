#ifndef _STDIO
#include <stdio.h>
#endif

void copytest1(char dst[], char src[]) {
	int i;
	for (i = 0; i < 26; i++)
	{
		dst[i] = src[i];
	}
}

void copytest2(char* dst, char* src) {
	int i;
	for (i = 0; i < 26; i++)
	{
		*(dst + i) = *(src + i);
	}
}

void prntest(char* dst) {
	int i;
	for (i = 0; i < 26; i++)
	{
		printf("%c ", *(dst + i));
	}
	printf("\n");
}