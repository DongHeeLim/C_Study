#pragma warning(disable:4996)
#include <stdio.h>
#define QUEUE_SIZE 5

// 원형 큐
// 시작 점 0 

int front = 0, rear = 0;
int queue[QUEUE_SIZE] = {0, };	// +1 은 공백 확인용

int enqueue(int num) {
	if ((rear + 1) % QUEUE_SIZE == front) {
		printf("overflow\n");
		return 0;
	}
	rear = (rear + 1) % QUEUE_SIZE;
	queue[rear] = num;
	printf("front:%d, rear:%d\n", front, rear);
	return 1;

}

int dequeue() {
	int output;
	if (rear == front) {
		printf("EMPTY\n");
		return 0;
	}
	front = (front + 1) % QUEUE_SIZE;
	output = queue[front];
	printf("front:%d, rear:%d\n", front, rear);
	return output;

}

void printQueue() {
	if (rear != front) {
		int curr = front;						// 시작 지점 
		do
		{
			curr = (curr + 1) % QUEUE_SIZE;		// 반복
			printf("%d ", queue[curr]);
			if (curr == rear) break;			// 종료 지점
		} while (curr != front);				// rear 못만나고 한바퀴 돌면 종료
		printf("\n");
	}
}

int main(void){
	for (int i = 0; i < QUEUE_SIZE +1; i++)
	{
		enqueue(10*i+10);
	}

	printQueue();

	for (int i = 0; i < 2; i++)
	{
		dequeue();
	}
	printQueue();
	return 0;
}