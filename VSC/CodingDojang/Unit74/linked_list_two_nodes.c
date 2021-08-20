#include <stdio.h>
#include <stdlib.h>

struct NODE{
    struct NODE *next;
    int data;
};

int main()
{   
    int structSize = sizeof(struct NODE);

    struct NODE *head = malloc(structSize);

    struct NODE *node1 = malloc(structSize);

    head->next = node1;
    node1->data = 10;

    struct NODE *node2 = malloc(structSize);

    node1->next = node2;
    node2->data = 20;
    node2->next = NULL;

    struct NODE *curr = head->next; // head다음(node1) 주소 저장(초기값)

    printf("%p\n", head->next);
    printf("%p\n", node1);

    while (curr != NULL)    //끝이 아니면 계속 진행
    {
        printf("%d\n", curr->data); //현재 노드의 데이터 출력
        curr = curr->next;      //포인터에 다음 노드의 주소 저장
    }

    free(node2);
    free(node1);
    free(head);

    return 0;
}