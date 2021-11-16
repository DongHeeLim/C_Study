#include <stdio.h>
#define N 5

int queue[N];
int front, rear;

void init_queue() {
	front = rear = 0;
}


int put(int num) {
	if ((rear+1) % (N+1) == front) {
		printf("overflow\n");
		return -1;
	}
	else {
		rear = (rear + 1) % (N+1);
		printf("re = %d\n", rear);
		queue[rear] = num;
	}

	

	
	
	return 1;
}

int get() {
	if (front == rear) {
		printf("underflow\n");
		return -1;
	}

	return queue[front++%N];
}

void print_queue() {
	int i;
	for (i = front+1; i != rear; i = i++ % N)
	{
		printf("%d ", queue[i]);
	}
}