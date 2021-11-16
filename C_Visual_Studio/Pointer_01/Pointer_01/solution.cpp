#include <stdio.h>

void calc(double a, char op, double b) {

	double result = 0;

	switch (op)
	{
	case '+':
		result = a + b;
		break;

	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b != 0) {
			result = a / b;
			break;
		}
		else {
			printf("불능");
			break;
		}
	default:
		break;
	}
	printf("%.2lf % c %.2lf = %.2lf\n", a, op, b, result);
}


int DoubleNum(int x, int y) {

	if (x % y == 0) {
		printf("%d은(는) %d의 배수입니다.\n", (int)x, (int)y); 
		return 1;
	}
	else {
		printf("%d은(는) %d의 배수가 아닙니다.\n", x, y);
		return 0;
	} 
}


int sum(int from, int to) {
	int result = 0;

	for (int i = from; i < to+1; i++)
	{
		result += i;
	}

	return result;
}


int Factorial(int n) {

	if (n == 1) return 1;

	return Factorial(n - 1) * n;
}


int Fibo(int n) {
	if (n < 1) return 0;
	if (n == 1 || n == 2) return 1;
	else return Fibo(n - 1) + Fibo(n - 2);
}


int Fibo2(int n) {
	int i, a = 1, b = 1;
	int c = 0;
	for (i = 0; i < (n-2); i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}


void ShowBit(int decimal) {
	int bin[32] = {0, };
	int count = 0;
	int room = 0;
	while (decimal >= 0)
	{
		if (decimal < (1 << count)) {
			break;
		}
		count++;
	}

	printf("count = %d\n", count);
	// 3 + 최소1자리 = 1room 만들기 위해
	room = (count+3) / 4 ;	
	int size = room * 4;
	printf("room = %d\n", room);
	printf("size = %d\n", size);
	
	while (decimal != 0)
	{
		for (int i = 0; i < size; i++)
		{
			bin[i] = decimal % 2;
			decimal /= 2;
		}

		for (int i = size-1; i >= 0; i--)
		{

			printf("%d", bin[i]);
			if ((i) % 4 == 0)
				printf(" ");
		}
	}

	printf("\n");
}


int Check(int x) {
	
	int i;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			break;
	}

	if (i == x) {
		printf("소수\n");
		return 1;
	}
	else
	{
		printf("소수아님\n");
		return 0;
	}
		
}