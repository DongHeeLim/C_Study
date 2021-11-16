#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 단일 Linked List
typedef struct _node {
	int key;
	struct _node* next;
	
}node, *pnode;

//정수, 실수, 문자, 다음주소
typedef struct _student {
	int kor;	// 4
	int eng;	// 4
	int mat;	// 4
	double avg;	// 8
	char* hak;	// 4
	struct _student* next1;	//4	

}st, *pst;

void addNode(pnode beforeTarget, int data) {

	if (beforeTarget == NULL)
		return;

	pnode newNode = (pnode)malloc(sizeof(node));
	newNode->next = beforeTarget->next;
	newNode->key = data;

	beforeTarget->next = newNode;
}

void removeNode(pnode beforeTarget) {

	if (beforeTarget == NULL)
		return;

	pnode targetNext = beforeTarget->next;
	if (beforeTarget == NULL)
		return;

	beforeTarget->next = targetNext->next;

	free(targetNext);
}

int main() {

	pnode arr[10];
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		arr[i] = (pnode)malloc(sizeof(node));
	}


	for (int i = 0; i < length; i++)
	{
		arr[i]->key = i;
		arr[i]->next = arr[i + 1];
		if (i == length - 1) {
			arr[length - 1]->next = NULL;
		}
	}



	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]->key);

	}

	for (int i = 0; i < length; i++)
	{
		free(arr[i]);
	}


	pnode head = (pnode)malloc(sizeof(node));

	pnode one = (pnode)malloc(sizeof(node));
	head->next = one;
	one->key = 10;
	
	pnode two = (pnode)malloc(sizeof(node));
	one->next = two;
	two->key = 20;

	pnode three = (pnode)malloc(sizeof(node));
	two->next = three;
	three->key = 30;
	three->next = NULL;


	pnode current = head->next;
	while (current != NULL)
	{
		printf("%d\n", current->key);
		current = current->next;
	}

	
	free(head);
	free(one);
	free(two);
	free(three);



	/*
	st people[3], temp;
	st kim = { 10, 20, 30, };
	st lee = { 40, 50, 60, };
	st park = { 70, 80, 90, };
	kim.avg = (kim.kor + kim.eng + kim.mat)/3.0;
	lee.avg = (lee.kor + lee.eng + lee.mat) / 3.0;
	park.avg = (park.kor + park.eng + park.mat) / 3.0;

	people[0] = kim;
	people[1] = lee;
	people[2] = park;


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2-i; j++)
		{
			if (people[j].avg > people[j + 1].avg) {
				temp = people[j];
				people[j] = people[j + 1];
				people[j + 1] = temp;
			}
		}
	}

	printf("kim -> %d %d %d %.2lf\n", kim.kor, kim.eng, kim.mat, kim.avg);
	for (int i = 0; i < 3; i++)
	{
		printf("people[%d] -> %d %d %d %.2lf\n", i ,people[i].kor, people[i].eng, people[i].mat, people[i].avg);
	}

	pst pkim = &kim;
	pst plee = &lee;
	pst ppark = &park;

	pkim->kor = 20;
	pkim->eng = 30;
	pkim->mat = 40;
	pkim->avg = (pkim->kor + pkim->eng + pkim->mat) / 3.0;

	printf("%d %d %d %.2lf\n", pkim->kor, pkim->eng, pkim->mat, pkim->avg);
	*/




	return 0;
}