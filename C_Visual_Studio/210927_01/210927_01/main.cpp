#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int i;
	//for (i = 4; i >=2; i--)
	//{
	//	printf("%d\n", i);
	//}

	//int a = 0;
	//do
	//{
	//	a++;
	//	printf("%2d", a);
	//} while (a<3);

	int b = 0, c = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)b += i;
		if (i % 5 == 0)c += i;
	}

	printf("%d-%d=%d\n", b, c, b-c);

	char j;
	for (j = 'A'; j <= 'Z'; j++)
	{
		printf("%c", j);
	}


	return 0;
}