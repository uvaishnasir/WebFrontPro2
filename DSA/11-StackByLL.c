#include <stdio.h> //linked-list--
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *head;

// Push function.
void push()
{
    int item;
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL)
    {
        printf("\nWarning OVERFLOW!\n");
    }
    else
    {
        printf("\nEnter the item to push in Stack.\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}

// pop function.
void pop()
{
    NODE *ptr = head;
    if (ptr == NULL)
        printf("\nWarning! UNDERFLOW!\n");
    else
    {
        head = head->next;
        free(ptr);
        printf("\nOne item popped  successfully.\n");
    }
}

void display()
{
    NODE *ptr = head;
    if (ptr == NULL)
        printf("\nStack is empty.\n");
    else
    {
        printf("\nCurrently Stack is:\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n***Enter the choices & Press 0 to exit\n1:PUSH\n2:POP\n3:Display Stack\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        };
    }
}