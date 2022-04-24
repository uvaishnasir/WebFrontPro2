#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

// traversing.
void LinkedListTraversel(NODE *ptr)
{
    while (ptr != NULL)
    {
        printf("DATA: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case-1 "Delete 1st node"
NODE *deleteAt1st(NODE *head)
{
    NODE *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// case-2 "delete at lndex."
NODE *deleteAtIndex(NODE *head, int index)
{
    NODE *p = head;
    NODE *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}
// case-3 "delete the last node".
NODE *deleteAtLast(NODE *head)
{
    NODE *p = head;
    NODE *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// case-4 "delete a node with given value/item."
NODE *deleteGivenItem(NODE *head, int item)
{
    NODE *p = head;
    NODE *q = head->next;
    while (q->data != item && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == item)
    {
        p->next = q->next;
        free(q);
    }
    return head;
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
    head->data = 2;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = NULL;
    printf("Before deletion linked list:\n");
    LinkedListTraversel(head);
    printf("After deletion linked list:\n");
    // head = deleteAt1st(head);       // case-1-Delete first node.
    // deleteAtIndex(head, 2);         // case-2-Delete at index(Pay attention index start from zero).
    // deleteAtLast(head);             // case-3-delete the last node.
    deleteGivenItem(head, 4);          // case-4-delete the node with given value(Pay attention except 1st value)
    LinkedListTraversel(head);
}