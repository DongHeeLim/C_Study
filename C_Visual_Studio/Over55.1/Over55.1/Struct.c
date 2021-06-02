#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 1;


};

int main()
{
	struct Flags f1;
	
	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	

		
	

}