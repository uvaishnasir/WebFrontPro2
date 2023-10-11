#include <stdio.h> //linked-list--
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *head;

void createlist(int n)
{
    NODE *ptr, *temp;
    int item;
    head = (NODE *)malloc(sizeof(NODE));
    if (head == NULL)
        printf("Overflow\n");
    else
    {
        printf("Enter the data\n");
        scanf("%d", &item);
        head->data = item;
        head->next = NULL;
        temp = head;
    }
    for (int i = 1; i < n; i++)
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        if (ptr == NULL)
            printf("Overflow\n");
        else
        {
            printf("Enter the data\n");
            scanf("%d", &item);
            ptr->data = item;
            ptr->next = NULL;
            temp->next = ptr;
            temp = temp->next;
        }
    }
}
void insert_begin()
{
    int item;
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL)
    {
        printf("OVERFLOW!\n");
    }
    else
    {
        printf("Enter the item\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}

void insert_end()
{
    int item;
    NODE *ptr, *temp;
    ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL)
    {
        printf("OVERFLOW!\n");
    }
    else
    {
        printf("Enter the item\n");
        scanf("%d", &item);
        ptr->data = item;
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
        ptr->next = NULL;
    }
}

void insert_loc()
{
    int item, loc;
    NODE *ptr, *temp;
    ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL)
    {
        printf("OVERFLOW!\n");
    }
    else
    {
        printf("Enter the item\n");
        scanf("%d", &item);
        ptr->data = item;
        printf("Enter the location\n");
        scanf("%d", &loc);
        temp = head;
        for (int i = 0; i < loc - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("Insertion can't be possible\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}
void display()
{
    NODE *ptr = head;
    if (ptr == NULL)
        printf("List is empty\n");
    printf("The List is:\n");
    while (ptr != NULL)
    {
        printf("DATA: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// deletion
void delete_begin()
{
    NODE *ptr = head;
    if (ptr == NULL)
        printf("Underflow\n");
    else
    {
        head = head->next;
        free(ptr);
    }
}

void delete_last()
{
    NODE *ptr, *ptr1;
    ptr = head;
    if (ptr == NULL)
        printf("Underflow\n");
    else
    {
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr->next = NULL;
        free(ptr);
    }
}

void delete_index()
{
    NODE *p = head;
    NODE *q = head->next;
    if (p == NULL)
        printf("Underflow\n");
    else
    {
        int index;
        printf("Enter the index of node that you want to delete\n");
        scanf("%d", &index);
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            q = q->next;
            if (q == NULL)
            {
                printf("No more node at this location.\n");
                return;
            }
        }
        p->next = q->next;
        free(q);
    }
}

int main()
{
    int choice, n;
    printf("Enter the number of nodes to create linked list\n");
    scanf("%d", &n);
    createlist(n);
    display();
    while (1)
    {
        printf("\n***Enter the choice for insertion:\n1: At Beginning.\n2: At Last\n3: At particular  location\n");
        printf("***Enter the choice for deletion:\n5: Beginning node.\n6: Last node\n7: Particular location node\n");
        printf("\nPress 4 to Display Linked list.\nPress 0 to exit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_begin();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_loc();
            break;
        case 4:
            display();
            break;
        case 5:
            delete_begin();
            break;
        case 6:
            delete_last();
            break;
        case 7:
            delete_index();
            break;
        }
        if (choice == 0)
            break;
    }
}