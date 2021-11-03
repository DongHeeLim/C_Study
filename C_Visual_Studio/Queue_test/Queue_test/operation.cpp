#include <stdio.h>
#define N 10

int queue[N];
//int len = sizeof(queue) / sizeof(queue[0]);
int rear = -1;
int front = 0;
int put_flag;

int put(int n) {

	printf("front : %d, rear : %d\n", front, rear);
	//if (rear >= N - 1)
	if(rear == -1) put_flag = 0;
	if(rear == front && put_flag == 1)	// circular
	{
		return -1;
	}
	else {
		put_flag = 1;
		rear = ++rear % N;
		queue[rear] = n;	// circular input positon
		return 1;
	}
}

int get() {
	// 초기 상태((front == -1 && rear == -1) || front >= 9)와 꽉찬상태 -> front = rear
	if (front == rear)
	{
		return -1;
	}
	return queue[++front % N];	// circular output position
}

void printQueue() {
	for (int i = 0; i < N; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n");
}