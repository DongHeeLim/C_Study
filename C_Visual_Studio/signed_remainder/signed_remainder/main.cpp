#include <stdio.h>

int main() {

	int a = -16;
	int remainder = a % 10;
	int result = a / 10;

	printf("%d\n", remainder); // -6
	printf("%d\n", result); // -1
	printf("%d\n", remainder + result*10);

	return 0;
}