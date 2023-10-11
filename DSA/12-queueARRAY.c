#include <stdio.h>

#define max 5 // size of the QUEUE.
int queue[max];
int front = -1, rear = -1;

void enqueue() // insertion at rear..
{
    int data;
    printf("Enter data\n");
    scanf("%d", &data);
    if ((rear + 1) % max == front)
        printf("\nOverflow\n\n");
    else if (front == -1 && rear == -1) //empty Q.
    {
        front = rear = 0;
        queue[rear] = data;
        printf("Enqueued: %d\n", data);
    }
    else
    {
        rear = (rear + 1) % max;
        queue[rear] = data;
        printf("Enqueued: %d\n", data);
    }
}
void dequeue() // deletion from front.
{
    if (front == -1 && rear == -1)
        printf("\nUnderflow\n\n");
    else if (front == rear)
    {
        printf("Deleted: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted: %d\n", queue[front]);
        front = (front + 1) % max;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
        printf("\nEmpty Queue\n\n");
    else
    {
        while (i != rear)
        {
            printf("Index %d: %d\n", i, queue[i]);
            i = (i + 1) % max;
        }
        printf("Index %d: %d\n", i, queue[rear]);
    }
}

int main()
{
    int ch;
    printf("*****Welcome to the Circular Queue:\n");
    while (1)
    {
        printf("Enter your choice\n");
        printf("0:Display\n1:Enqueue\n2:Dequeue\n3:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            display();
            break;
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        }
        if (ch == 3)
            break;
    }
    return 0;
}