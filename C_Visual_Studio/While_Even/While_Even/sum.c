#include <stdio.h>

int main()
{
	int a = 0;
	int sum = 0;

	while (a <= 100)
	{
		a++;
		if (a % 2 == 0) 
		{
			sum += a;
			printf("%d\n", a);
		
		}
			
	}

	printf("0~100 Â¦¼öÇÕ : %d\n", sum);

	return 0;

}