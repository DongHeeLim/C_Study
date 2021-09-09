#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo1(int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
		return 1;
	return fibo1(n - 1) + fibo1(n - 2);
}

int factorial(int n)
{
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

void hanoi(char start, char end, char temp, int n)
{
	if (n >= 1)
	{
		hanoi(start, temp, end, n - 1);
		printf("%c에서 %c로 %d번 원판을 이동시킨다.\n", start, end, n);
		hanoi(temp, end, start, n - 1);
	}
}

char perm[3] = { 'a', 'b', 'c' };
int num1 = sizeof(perm);
void makeperm(int k) 
{
	char temp;
	if (k == num1)
	{
		for (int i = 0; i < num1; i++)
		{
			printf("%c", perm[i]);
		}
		printf("\n");
	}
	else
	{
		for (int i = k; i < num1; i++)
		{
			temp = perm[i];
			perm[i] = perm[k];
			perm[k] = temp;
			makeperm(k + 1);
			temp = perm[i];
			perm[i] = perm[k];
			perm[k] = temp;
		}
	}
}

int main()
{
	int n;
	char start = 'A', middle = 'B', end = 'C';
	printf("원판의 갯수? :");
	scanf("%d", &n);
	hanoi(start, end, middle, n);
	printf("\n");

	makeperm(0);

	printf("fibo1 : %d\n", fibo1(7));
	printf("factorial : %d\n", factorial(5));

	return 0;
}