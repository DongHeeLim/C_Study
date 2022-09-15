// 배열 사이즈 전부 사용

#pragma warning(disable:4996)
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front, rear, size;

void init_queue() {
	front = 0;			// dequeue 시작
	rear  = SIZE - 1;	// 기존의 -1 이 아니라 배열의 가장 마지막 칸을 시작 지점으로 잡음
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
		printf("가득참\n");		// size == 설정한 배열 크기
		return;
	}
	rear = (rear + 1) % SIZE;		// 시작할 때 : 5칸 짜리 배열이면 [4]-> [0]
	queue[rear] = data;
	size = size + 1;		// 배열 내부 데이터 개수 + 1
	printf("front : %d, rear : %d, size: %d\n", front, rear, size);
}

int dequeue() {
	int output;
	if (is_empty()) {			// size == 0
		printf("비었음\n");
		return -1;
	}

	output = queue[front];	// front 0번 방부터
	front = (front + 1) % SIZE;	// 0 번방 내보내고 다음 값은 1, 0~4 범위
	size = size - 1;		// 배열 내부 데이터 개수 - 1
	return output;
}

void printQueue() {
	if (!is_empty()) {
		printf("===============\n");
		// 기존의 한칸 비는 것을 완전히 대체 가능
		int current = front;	//front  
		do 
		{
			printf("%d ", queue[current]);	// 0, 1, 2, 3, 4
			//printf("current : %d\n", current);
			printf("current : %d, front : %d, rear : %d, size: %d\n", current, front, rear, size);
			current = (current + 1) % SIZE;	// 1, 2, 3, 4, 0<-while 탈출
			if (current == rear + 1) break;	// 끝방 넘어가면(rear + 1) 종료
			if (size == 1) break;			//do while 특성상 필요
		} while (current != front);			// 자기 자신까지
		printf("===============\n");
	}
	else {
		printf("아무것도없음\n");
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
		printf("빼낸 값 : %d \n", dequeue());
	}
	printQueue();
	//printArray();
	enqueue(70);
	enqueue(80);
	printQueue();

	return 0;
}