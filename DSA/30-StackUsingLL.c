#include <stdio.h> //linked-list--
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *top;

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
        ptr->next = top;
        top = ptr;
    }
}

// pop function.
void pop()
{
    NODE *ptr = top;
    if (ptr == NULL)
        printf("\nWarning! UNDERFLOW!\n");
    else
    {
        int item = top->data;
        top = top->next;
        free(ptr);
        printf("\n%d popped successfully.\n", item);
    }
}

void display()
{
    NODE *ptr = top;
    if (ptr == NULL)
        printf("\nStack is empty.\n");
    else
        printf("\nCurrently Stack is:\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
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