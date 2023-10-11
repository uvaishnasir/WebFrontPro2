#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

// case-1
NODE *InsertAtFirst(NODE *head, int data)
{
    NODE *p = (NODE *)malloc(sizeof(NODE));
    if (p == NULL)
    {
        printf("Memory not alloacated\n");
    }
    else
    {
        p->data = data;
        p->next = head;
        head = p;
    }

    return head;
}

// case-2
NODE *InsertAtIndex(NODE *head, int data, int index)
{
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    NODE *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

// case-3
NODE *InsertAtEnd(NODE *head, int data)
{
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    NODE *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    return head;
}

// case-4
NODE *InsertAfterNode(NODE *head, NODE *prevNode, int data)
{
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

// traversing LL.
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
    NODE *head, *second, *third, *ptr;
    // Alloacte memory in the Heap for nodes in the linkedlist.
    head = (NODE *)malloc(sizeof(NODE));
    second = (NODE *)malloc(sizeof(NODE));
    third = (NODE *)malloc(sizeof(NODE));

    // link the nodes sequentially, head & second.
    head->data = 7;
    head->next = second;

    // link 2nd & 3rd node.
    second->data = 9;
    second->next = third;

    // link 3rd & 4th node.
    third->data = 11;
    third->next = NULL;

    printf("Before the Insertion LL is:\n");
    LinkedListTraversel(head);
    printf("After the Insertion LL is:\n");
    // Case-1
    // InsertAtFirst(head, 5);
    // Case-2
    //  InsertAtIndex(head, 5, 2);
    // Case-3
    InsertAtEnd(head, 15);
    // Case-4
    // InsertAfterNode(head, third, 25);
    LinkedListTraversel(head);
}