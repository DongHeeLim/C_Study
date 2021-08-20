#include <stdio.h>
#include <stdlib.h>

struct NODE{
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data)
{
    if (target == NULL)
        return;

    struct NODE *newNode = malloc(sizeof(struct NODE));

    if(newNode == NULL)
        return;
    newNode->next = target->next;
    newNode->data = data;
    target->next = newNode;
}

void removeFirst(struct NODE *target)
{
    if (target == NULL)
        return;

    struct NODE *removeNode = target->next;

    if(removeNode == NULL)
        return;

    target->next = removeNode->next;
    free(removeNode);
}

void printNodeData(struct NODE *target)
{
    struct NODE *curr = target->next;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}

void freeNode(struct NODE *target)
{
    struct NODE *curr = target->next;
    while(curr != NULL)
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }
}


int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;

    addFirst(head, 10);
    addFirst(head, 20);
    
    addFirst(head, 30);
    removeFirst(head);

    printNodeData(head);
    freeNode(head);

    free(head);
    
    return 0;
}