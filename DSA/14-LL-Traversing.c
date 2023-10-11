#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

//traversing LL.
void LinkedListTraversel(NODE *ptr)
{
    while (ptr != NULL)
    {
        printf("DATA: %d\n", ptr->data);
        ptr = ptr->next;
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

    // link the nodes sequentially.
    head->data = 7;
    head->next = second;

    // link 2nd & 3rd node.
    second->data = 9;
    second->next = third;

    // link 3rd & 4th node.
    third->data = 11;
    third->next = fourth;

    // 4th set NULL.
    fourth->data = 15;
    fourth->next = NULL;

    LinkedListTraversel(head);
}