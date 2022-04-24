#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

// traversing LL.
void LinkedListTraversel(NODE *head)
{
    NODE *ptr = head;
    int sum = 0, count = 0;
    do
    {
        printf("DATA: %d\n", ptr->data);
        sum += ptr->data;
        count++;
        ptr = ptr->next;
    } while (ptr != head);
    printf("SUM of data in all %d nodes = %d\n", count, sum);
}
NODE *insertAt1st(NODE *head, int data)
{
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    ptr->data = data;
    NODE *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    } // at this point p is pointing to the last node.
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
void main()
{
    NODE *head = (NODE *)malloc(sizeof(NODE));
    NODE *second = (NODE *)malloc(sizeof(NODE));
    NODE *third = (NODE *)malloc(sizeof(NODE));
    NODE *fourth = (NODE *)malloc(sizeof(NODE));
    // link the nodes sequentially.
    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 7;
    fourth->next = head;
    printf("Circular linked list before insertion\n");
    LinkedListTraversel(head);
    printf("Circular linked list after insertion\n");
    head = insertAt1st(head, 3);
    head = insertAt1st(head, 2);
    head = insertAt1st(head, 1);
    LinkedListTraversel(head);
}