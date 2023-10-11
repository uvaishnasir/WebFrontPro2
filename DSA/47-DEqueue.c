#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} Node;
Node *f = NULL;
Node *r = NULL;

void enqueueR(int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    if (new == NULL)
        printf("Overflow\n");
    else
    {
        new->data = data;
        new->next = NULL;
        // printf("Enquing: %d\n", new->data);
        if (f == NULL)
        {
            f = r = new;
        }
        else
        {
            r->next = new;
            r = new; // move rear ahead.
        }
    }
}
void enqueueF(int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    if (new == NULL)
        printf("Overflow\n");
    else
    {
        new->data = data;
        new->next = f;
        f = new;
    }
}

void dequeueF()
{
    Node *ptr = f;
    if (f == NULL)
        printf("Underflow\n");
    else
    {
        f = f->next;
        printf("Dequing from front: %d\n", ptr->data);
        free(ptr);
    }
}

void dequeueR()
{
    Node *p = f;
    Node *q = f->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    printf("Dequeue from rear: %d\n", q->data);
    p->next = NULL;
    r = p;
    free(q);
}

void traversingQ(Node *f)
{
    printf("\n***Printing the data of Queue.\n");
    while (f != NULL)
    {
        printf("DATA: %d\n", f->data);
        f = f->next;
    }
}

void main()
{
    enqueueR(4);  // 4
    enqueueR(8);  // 4, 8
    enqueueR(7);  // 4,8,7
    enqueueF(9);  // 9,4,8,7
    enqueueF(10); // 10,9,4,8,7
    enqueueF(20); // 20,10,9,4,8,7
    enqueueF(25); // 25,20,10,9,4,8,7
    traversingQ(f);
    dequeueF(); // 25
    dequeueF(); // 20
    dequeueF(); // 10
    dequeueR(); // 7
    dequeueR(); // 8
    dequeueR(); // 4
    dequeueF(); // 9 --you must use front side to dequeue last element otherwise you got error.
}