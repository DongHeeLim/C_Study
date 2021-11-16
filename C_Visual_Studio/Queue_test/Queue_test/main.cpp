#include <stdio.h>
#ifndef C
//#include "operation.h"
#endif
#include "circleQueue.h"

int main() {
	
	put(10);
	put(20);
	put(30);
	put(40);
	put(50);

	print_queue();

	//int rput, rget;

	//for (int i = 0; i < 5; i++)
	//{
	//	rput = put(i + 10);
	//	if (rput == -1) printf("overflow\n");

	//}

	//print_queue();

	//for (int i = 0; i < 5; i++)
	//{
	//	rget = get();
	//	if (rget == -1) printf("underflow\n");
	//	else printf("%d\n", rget);
	//}

	//print_queue();

	return 0;
}