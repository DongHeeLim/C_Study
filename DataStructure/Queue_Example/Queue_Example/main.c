// ����� �ణ �̻���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int count = 0;
int n;
int front = 0, rear = 0;
int* queue;

void enQueue(int data) {

	if ((rear + 1) % (n + 1) == front) {
		printf("ť�� �� á���ϴ�.\n");
		return;
	}

	rear = (rear + 1) % (n + 1);
	queue[rear % (n + 1)] = data;

}

int deQueue() {
	int data;

	if (front == rear) {
		printf("ť�� ������ϴ�.\n");
		return 0;
	}

	data = queue[(front + 1) % (n + 1)];
	front = (front + 1) % (n + 1);
}

void printQueue() {
	int idx = 0;
	idx = (front + 1) % (n + 1);

	do {
		if (front == rear) {
			printf("ť�� ������ϴ�.\n");
			break;
		}
		else if (idx > rear)
			break;
		printf("%d ", queue[idx++ % (n + 1)]);
	} while (1);

}

int main() {

	printf("���� ť�� ũ�� �Է� : ");
	scanf("%d", &n);
	queue = (int*)malloc(sizeof(int) * (n + 1));

	while (1) {
		int menu, data;
		printf("\n1. ���� , 2. ����, 3. ���, 4. ����\n");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			printf("������ ������ �Է� : ");
			scanf("%d", &data);
			enQueue(data);
			break;
		case 2:
			deQueue();
			break;
		case 3:
			printQueue();
			break;
		case 4:
			exit(1);
			break;
		}
	}

}