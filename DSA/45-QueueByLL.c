#include <stdio.h>
#include <stdlib.h>    //QUEUE By Linked list.

typedef struct NODE
{
    int data;
    struct NODE *next;
} Node;
Node *f = NULL;
Node *r = NULL;

void enqueue(int data)
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
void dequeue()
{
    Node *ptr = f;
    if (f == NULL)
        printf("Underflow\n");
    else
    {
        f = f->next;
        printf("Dequing: %d\n", ptr->data);
        free(ptr);
    }
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
    enqueue(4);
    enqueue(8);
    enqueue(7);
    enqueue(9);
    enqueue(100);
    traversingQ(f);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    traversingQ(f);
}