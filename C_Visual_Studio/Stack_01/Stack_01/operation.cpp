#include <stdio.h>
#define N 4

int top;
int array[N];
int stack_size = sizeof(array) / sizeof(array[0]);

extern int a = 10;


void init_stack() {
	top = -1;
	printf("%d\n", a);
}

void push_stack(int num) {
	if (top >= stack_size-1) {
		printf("overflow\n");
		return;
	} 
	else {
		array[++top] = num;	// 위 if문 = 이유 ++
	}
}

int pop_stack() {
	if (top < 0) {
		printf("underflow\n");
		return -1;
	} 
	return array[top--];
}

void push_scanf() {
	int i;
	int num;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &num);
		push_stack(num);
	}
}

void print_pop() {
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d\n", pop_stack());
	}
}
