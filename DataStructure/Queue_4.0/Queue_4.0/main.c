#pragma warning(disable:4996)
#include <stdio.h>

#define SIZE 5	// 한칸은 공백 유무 확인용
int front, rear;
int queue[SIZE];

void init_queue() {
	front = SIZE - 1;	// 배열 마지막 칸 또는 -1 로 시작 
	rear  = SIZE - 1;
}

int is_empty() {
	return front == rear;
}

int is_full() {
	return ((rear + 1) % SIZE) == front;
}

void enqueue(int data) {
	if (is_full()) {
		printf("가득참\n");
		return;	// return 필수
	}
	rear = (rear + 1) % SIZE;
	queue[rear] = data;
}

int dequeue() {
	if (is_empty()) {
		printf("비었음\n");
		return 0;
	}
	front = (front + 1) % SIZE;

	return queue[front];
}

void printQueue() {
	printf("=================\n");
	if (!is_empty()) {
		int current = front;
		do 
		{
			current = (current + 1) % SIZE;
			printf("%d ", queue[current]);
			if (current == rear) break;
		} while (current != front);
		printf("\n");
	}
	printf("=================\n");
}


int main(void) {
	enqueue(11);
	enqueue(22);
	enqueue(33);
	enqueue(44);
	enqueue(50);
	enqueue(60);

	printQueue();

	for (int i = 0; i < 5; i++)
	{
		dequeue();
	}

	enqueue(50);
	enqueue(60);

	printQueue();

	return 0;
}