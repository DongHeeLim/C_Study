#include <stdio.h>
#include <stdlib.h>

struct NODE{
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data)
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;   //원래 다음인 것을 새로운 노드 뒤로
    newNode->data = data;   // 데이터 생성
    target->next = newNode; // 대상 다음은 새로 만든 것
}

int main()
{   
    int structSize = sizeof(struct NODE);

    struct NODE *head = malloc(structSize);
    head->next = NULL;

    addFirst(head, 10);
    addFirst(head, 20);
    addFirst(head, 30);     //늦게 만들 수록 head(target)에 가까움

    struct NODE *curr = head->next; //순회용 포인터

    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    curr = head->next;  //헤드 다음(첫 번째 노드의 주소 저장)
    while (curr != NULL)
    {
        // 노드 위치를 다음으로 옮기고 해제시키는 방식
        struct NODE *next = curr->next; //현재 노드의 다음 노드 주소 저장
        free(curr); //현재 노드 메모리 해제
        curr = next; // 다음 노드 저장
    }
    
    free(head);

    return 0;
}