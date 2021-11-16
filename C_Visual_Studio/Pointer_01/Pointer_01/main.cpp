#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "solution.h"

int main() {

	clock_t start, end;
	double result;
	int sum = 0;

	start = clock();




	//calc(10, '+', 2);
	//calc(10.5, '-', 2.1);
	//calc(21, '*', 3);
	//calc(10, '/', 2);

	//DoubleNum(16, 4);
	//printf("%d\n", sum(1, 100));

	//printf("%d\n", Factorial(5));

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", Fibo(i));
	//}
	

	ShowBit(15);
	printf("\n");
	ShowBit(16);

	Check(8);
	/*int a;
	scanf_s("%d", &a);
	while (a < 2)
	{
		printf("2이상인 숫자를 입력하시오\n");
		scanf_s("%d", &a);
	}
	if (Check(a)) printf("%d는 소수입니다. \n", a);
	else printf("%d는 소수가 아닙니다. \n", a);*/

	end = clock();
	result = (double)(end - start);
	printf("실행시간 : %.2lf\n", result);
	return 0;
}