#pragma warning(disable:4996)
#include <stdio.h>
#define QUEUE_SIZE 5

// 선형 큐

int front = 0, rear = 0;
int queue[QUEUE_SIZE+1];

int enqueue(int num) {

	if (rear >= QUEUE_SIZE) {
		printf("overflow\n");
		return -1;	// fail
	}
	rear = rear + 1;
	queue[rear] = num;
	return 1; // success

}

int dequeue() {
	if (front == rear) {
		printf("underflow<EMPTY> : ");
		return -1;
	}
	front = front + 1;
	return queue[front];
}

void printQueue() {
	printf("FRONT-> ");
	for (int i = 1; i <= QUEUE_SIZE; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("<-REAR\n");
}


// 시작 점 0, 배열 크기 : 5+1, 넣을 수 있는 개수 5개
int main(void) {
	for (int i = 0; i < QUEUE_SIZE + 1; i++)	// input 6
	{
		enqueue(10*i + 10);
	}

	for (int i = 0; i < QUEUE_SIZE+1; i++)		// output 6 
    {
		printf("꺼내온 값 %d\n", dequeue());
	}

	printQueue();

	

	return 0;
}