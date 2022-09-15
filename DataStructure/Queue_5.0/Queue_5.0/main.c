// �迭 ������ ���� ���

#pragma warning(disable:4996)
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front, rear, size;

void init_queue() {
	front = 0;			// dequeue ����
	rear  = SIZE - 1;	// ������ -1 �� �ƴ϶� �迭�� ���� ������ ĭ�� ���� �������� ����
	size  = 0;
}

int is_empty() {
	return size == 0;
}

int is_full() {
	return size == SIZE;
}

void enqueue(int data) {
	if (is_full()) {
		printf("������\n");		// size == ������ �迭 ũ��
		return;
	}
	rear = (rear + 1) % SIZE;		// ������ �� : 5ĭ ¥�� �迭�̸� [4]-> [0]
	queue[rear] = data;
	size = size + 1;		// �迭 ���� ������ ���� + 1
	printf("front : %d, rear : %d, size: %d\n", front, rear, size);
}

int dequeue() {
	int output;
	if (is_empty()) {			// size == 0
		printf("�����\n");
		return -1;
	}

	output = queue[front];	// front 0�� �����
	front = (front + 1) % SIZE;	// 0 ���� �������� ���� ���� 1, 0~4 ����
	size = size - 1;		// �迭 ���� ������ ���� - 1
	return output;
}

void printQueue() {
	if (!is_empty()) {
		printf("===============\n");
		// ������ ��ĭ ��� ���� ������ ��ü ����
		int current = front;	//front  
		do 
		{
			printf("%d ", queue[current]);	// 0, 1, 2, 3, 4
			//printf("current : %d\n", current);
			printf("current : %d, front : %d, rear : %d, size: %d\n", current, front, rear, size);
			current = (current + 1) % SIZE;	// 1, 2, 3, 4, 0<-while Ż��
			if (current == rear + 1) break;	// ���� �Ѿ��(rear + 1) ����
			if (size == 1) break;			//do while Ư���� �ʿ�
		} while (current != front);			// �ڱ� �ڽű���
		printf("===============\n");
	}
	else {
		printf("�ƹ��͵�����\n");
	}
}

void printArray() {
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n");
}

int main(void) {
	init_queue();
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);	// overflow
	printQueue();
	//printArray();
	for (int i = 0; i < SIZE-1; i++)	// +1 underflow
	{
		printf("���� �� : %d \n", dequeue());
	}
	printQueue();
	//printArray();
	enqueue(70);
	enqueue(80);
	printQueue();

	return 0;
}