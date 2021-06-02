#include <stdio.h>

void main()
{

	int start_length = 1;
	int end_length = 100;
	int result = 0;

	for (int i = 0; i <= end_length; i++)
	{
		result = start_length + i;

		if (result%5 == 0)
		{
			printf("%d\n", result);
		}
		
		
	}

	return 0;
}