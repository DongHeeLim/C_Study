#include <stdio.h>
#include "operation.h"
#include "copy.h"
#include "max_min.h"
#include "sort.h"
#include "medal.h"

#define _STDIO
#define line printf("-----\n")
#define prt(a) printf("res=%d\n", a)

int main(int len, char *s[])	// main�μ� ���� + 1(main.c) , �μ� ���빰 �迭(���α׷���, �μ� 4��) 
{
	line;
	prt(5);
	
	findMaxMin();
	selectionSorting();
	clasifyMedal();
	//printf("%d\n", len);

	//for (int i = 0; i < len; i++)
	//{
	//	printf("%s\n", s[i]);
	//}

	register int a;

	char src[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";	//26���ε� \0 ����
	char dst[27];
	//copytest1(dst, src);
	//copytest2(dst, src);
	//prntest(dst);
	
	//init_stack();
	//push_scanf();
	//print_pop();

	return 0;
}