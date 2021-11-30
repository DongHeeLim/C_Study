#include <stdio.h>
#define STACK_SIZE 5

int stack[STACK_SIZE];
int top = -1;

void push(int num) {
	if (top >= STACK_SIZE - 1) {
		printf("overflow\n");
		return;
	}
	else {
		top = top + 1;
		printf("top = %d\n", top);
		stack[top] = num;
	}
}

int pop() {
	if (top <= -1) {
		printf("underflow\n");
		return -1;
	}
	else {
		printf("꺼낸 값 : %d\n", stack[top]);
		top--;
	}

	return 0;
}

void printStack(int* array) {
	printf("------\n");
	for (int i = 0; i <= top; i++)
	{	
		printf("%d\n", array[i]);
	}
	printf("------\n");

}

int main() {
	
	//printf("숫자를 입력해주세요 : ");
	//scanf_s("%d", &insertNUM);
	//push(insertNUM);
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	int pop_count = 6;
	for (int i = 0; i < pop_count; i++)
	{
		pop();
	}

	printStack(stack);

	return 0;
}