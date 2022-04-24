#include <stdio.h>
#include <stdlib.h>

typedef struct circularQUEUE // circular queue.
{
    int size, f, r;
    int *arr;
} cirQ;

void enqueue(cirQ *q, int data)
{
    if ((q->r + 1) % q->size == q->f)
        printf("Queue is Full.\n");
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = data;
        printf("Enqued: %d\n", data);
    }
}

void dequeue(cirQ *q)
{
    if (q->r == q->f)
        printf("Queue is empty\n");
    else
    {
        q->f = (q->f + 1) % q->size;
        printf("Dequed: %d\n", q->arr[q->f]);
    }
}

void main()
{
    cirQ q;
    q.size = 6;      //(size-1) elements can be store in this queue. here 5 element can be store.
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // enqueue //dequeue operation.
    enqueue(&q, 9);
    enqueue(&q, 8);
    enqueue(&q, 7);
    enqueue(&q, 6);
    enqueue(&q, 5);
    enqueue(&q, 4);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    // dequeue(&q);
}