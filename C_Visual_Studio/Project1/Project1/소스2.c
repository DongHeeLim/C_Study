#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int s[20];
	int n, c, k;
	scanf("%d", &n);
	
	while (n >= 2)
	{
		c = 0;
		while (n != 1)
		{
			k = 2;
			while (n % k != 0) { k++; }
			s[c] = k;
			c++;
			n = n / k;
		}
		if (c != 1)
		{
			for (int i = 0; i < c - 1; i++)
			{
				printf("%d*", s[i]);
			}

			printf("%d", s[c - 1]);
			break;
		}
		printf("Prime");
	}

	return 0;
}