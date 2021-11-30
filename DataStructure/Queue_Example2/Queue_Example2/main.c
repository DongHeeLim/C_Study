#include <stdio.h>

#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct QueueType {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

//ť �ʱ�ȭ 
void init_queue(QueueType* q) {
	q->front = q->rear = 0;
}

//ť�� ��� �ִ��� Ȯ��
int is_empty(QueueType* q) {
	return (q->front == q->rear);
}

//ť�� ���� á���� Ȯ��
int is_full(QueueType* q) {
	return (q->front == ((q->rear + 1) % MAX_QUEUE_SIZE));
}

//ť�� ���� �� �ִ��� Ȯ�� �� ���� ����
void enqueue(QueueType* q, int data) {
	if (is_full(q)) {
		printf("Queue is full \n");
	}
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = data;
	}
}

//ť�� ��� �ִ��� Ȯ�� �� ���� ����
element dequeue(QueueType* q) {
	if (is_empty(q)) {
		printf("Queue is empty \n");
		exit(1);
	}
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		int data = q->data[q->front];
		return data;
	}
}

//ť�� ��� ��� ���
void print_queue(QueueType* q) {
	if (is_empty(q)) {
		printf("Empty Queue \n");
	}
	else {
		printf("Queue:");
		if (!is_empty(q)) {
			int i = q->front;
			do {
				i = (i + 1) % MAX_QUEUE_SIZE;
				printf(" %d |", q->data[i]);
				if (i == q->rear)
					break;
			} while (i != q->front);
			printf("\n");
		}
	}
}

int main() {

	QueueType queue;

	int item = 0;
	init_queue(&queue);

	enqueue(&queue, 3);
	print_queue(&queue);

	enqueue(&queue, 4);
	print_queue(&queue);

	enqueue(&queue, 5);
	print_queue(&queue);

	item = dequeue(&queue);
	print_queue(&queue);

	enqueue(&queue, 6);
	print_queue(&queue);

	enqueue(&queue, 7);
	print_queue(&queue);

	item = dequeue(&queue);
	print_queue(&queue);

	return 0;
}