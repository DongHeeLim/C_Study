#include <stdio.h>
#include "operation.h"

int main() {
	
	int rput, rget;

	for (int i = 0; i < 13; i++)
	{
		rput = put(i + 10);
		if (rput == -1) printf("overflow\n");

	}


	for (int i = 0; i < 12; i++)
	{
		rget = get();
		if (rget == -1) printf("underflow\n");
		else printf("%d\n", rget);
	}

	printQueue();

	return 0;
}