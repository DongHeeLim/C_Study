#include <stdio.h>
#include "solution.h"

int main() {

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
	
	ShowBit(256);

	int a;
	scanf_s("%d", &a);
	while (a < 2)
	{
		printf("2�̻��� ���ڸ� �Է��Ͻÿ�\n");
		scanf_s("%d", &a);
	}
	if (Check(a)) printf("%d�� �Ҽ��Դϴ�. \n", a);
	else printf("%d�� �Ҽ��� �ƴմϴ�. \n", a);

	return 0;
}