#include <stdio.h>
#include <stdlib.h>

struct NODE{
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data)
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;
    target->next = newNode;
}

struct NODE *findNode(struct NODE *node, int data)
{
    if(node == NULL)
        return NULL;

    struct NODE *curr = node->next;
    while(curr != NULL)
    {   
        if(curr->data == data)
        {
            return curr;
        }
        curr = curr->next;
    }

    if(curr == NULL)
        return NULL;
}

void printNode(struct NODE *target)
{
    if(target == NULL)
        return;

    struct NODE *curr = target->next;
    if(curr == NULL)
        return;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }   
}

void freeNode(struct NODE *target)
{
    struct NODE *curr = target->next;
    while (curr != NULL)
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }
    
}

void removeFirst(struct NODE *target)
{
    if(target==NULL)
        return;

    struct NODE *removeNode = target->next;

    if(removeNode==NULL)
        return;

    target->next = removeNode->next;
    free(removeNode);

}



int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;
    
    addFirst(head, 30);
    addFirst(head, 20);
    addFirst(head, 10);

    struct NODE *found = findNode(head, 20);
    printf("%d\n", found->data);

    freeNode(head);

    free(head);

    return 0;
}