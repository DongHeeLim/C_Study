#pragma warning(disable:4996)
#include <stdio.h>
#define QUEUE_SIZE 5

// ���� ť
// ���� �� 0 

int front, rear;
int queue[QUEUE_SIZE] = { 0, };	// +1 �� ���� Ȯ�ο�

void init_queue() {
	front = rear = 0;
}

int is_empty() {
	return front == rear;
}

int is_full() {
	return (rear + 1) % QUEUE_SIZE == front;
}

int enqueue(int num) {
	if (is_full()) {
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
	if (is_empty()) {
		printf("EMPTY\n");
		return 0;
	}
	front = (front + 1) % QUEUE_SIZE;
	output = queue[front];
	printf("front:%d, rear:%d\n", front, rear);
	return output;

}

void printQueue() {
	if (!is_empty()) {
		int curr = front;						// ���� ���� 
		do
		{
			curr = (curr + 1) % QUEUE_SIZE;		// �ݺ�
			printf("%d ", queue[curr]);
			if (curr == rear) break;			// ���� ����
		} while (curr != front);				// rear �������� �ѹ��� ���� ����
		printf("\n");
	}
}

int main(void) {
	init_queue();

	for (int i = 0; i < QUEUE_SIZE + 1; i++)
	{
		enqueue(10 * i + 10);
	}

	printQueue();

	for (int i = 0; i < 2; i++)
	{
		dequeue();
	}
	printQueue();
	return 0;
}