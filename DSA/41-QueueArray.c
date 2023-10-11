#include <stdio.h>
#include <stdlib.h>

typedef struct QUEUE // linear queue.
{
    int size, f, r;
    int *arr;
} Queue;

void enqueue(Queue *q, int data)
{
    if (q->r == q->size - 1)
        printf("Queue is Full.\n");
    else
    {
        q->r++;
        q->arr[q->r] = data;
        printf("Enqueued: %d\n", data);
    }
}

void dequeue(Queue *q)
{
    int a = -1;
    if (q->f == q->r)
        printf("Queue is empty\n");
    else
    {
        q->f++;
        a = q->arr[q->f];
        printf("Dequeuimg: %d\n", a);
    }
}

void main()
{
    Queue q; //                                 |  |  |  |  |  |  |       if empty (f=r) & if full (r=size-1)
    q.size = 5;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // enqueue //dequeue
    enqueue(&q, 9);
    dequeue(&q);
    enqueue(&q, 8);
    dequeue(&q);
    enqueue(&q, 7);
    dequeue(&q);
    enqueue(&q, 6);
    dequeue(&q);
    enqueue(&q, 5);
    dequeue(&q);
    enqueue(&q, 4);
    dequeue(&q);      //this is the drawback of linear queue.
}