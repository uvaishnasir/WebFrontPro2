#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE;

// traversing LL.
void DLLTraversel(NODE *p, NODE *q)
{
    printf("Forward traversing\n");
    while (p != NULL)
    {
        printf("DATA: %d\n", p->data);
        p = p->next;
    }
    printf("Backward traversing\n");
    while (q->next != NULL)
        q = q->next;
    while (q != NULL)
    {
        printf("%d\n", q->data);
        q = q->prev;
    }
}
void main()
{
    NODE *head;
    NODE *second;
    NODE *third;
    NODE *fourth;
    // Alloacte memory in the Heap for nodes in the linkedlist.
    head = (NODE *)malloc(sizeof(NODE));
    second = (NODE *)malloc(sizeof(NODE));
    third = (NODE *)malloc(sizeof(NODE));
    fourth = (NODE *)malloc(sizeof(NODE));

    // linking the nodes.
    head->data = 1;
    head->next = second;
    head->prev = NULL;

    second->data = 2;
    second->next = third;
    second->prev = head;

    third->data = 3;
    third->next = fourth;
    third->prev = second;

    fourth->data = 4;
    fourth->prev = third;
    fourth->next = NULL;

    DLLTraversel(head, head);
}