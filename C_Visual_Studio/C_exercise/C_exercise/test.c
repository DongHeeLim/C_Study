#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union _Box {
	short candy;
	float snack;
	char doll[8];

}Box;


int main() {

	Box *b1 = malloc(sizeof(Box));

	printf("%d\n", sizeof(Box));

	strcpy(b1->doll, "bear");

	printf("%d\n", b1->candy);
	printf("%f\n", b1->snack);
	printf("%s\n", b1->doll);

	free(b1);

	return 0;
}