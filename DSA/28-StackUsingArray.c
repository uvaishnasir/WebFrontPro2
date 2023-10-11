#include <stdio.h> //16/11/21
#include <stdlib.h>
typedef struct STACK
{
    int top;
    int size;
    int *arr;
} Stack;

int isEmpty(Stack *sp)
{
    if (sp->top == -1)
        return 1;
    else
        return 0;
}
int isFull(Stack *sp)
{
    if (sp->top == sp->size - 1)
        return 1;
    else
        return 0;
}
void PUSH(Stack *sp, int element)
{
    if (isFull(sp))
        printf("\tWarning! Stack Overflow\n\tNow you can't PUSH %d\n", element);
    else
    {
        sp->top++;
        sp->arr[sp->top] = element;
        printf("Push: %d\n", element);
    }
}
int POP(Stack *sp)
{
    if (isEmpty(sp))
        printf("\tWarning! Stack Underflow\n\tNow you can't POP one more element.\n");
    else
    {
        int element = sp->arr[sp->top];
        sp->top--;
        return element;
    }
}

int Peek(Stack *sp, int i)
{
    int arrInd = sp->top - i + 1;
    if (arrInd < 0)
    {
        printf("Not valid position\n");
        return -1;
    }
    else
        return sp->arr[arrInd];
}

int stackTop(Stack *sp)
{
    return sp->arr[sp->top];
}
int stackBottom(Stack *sp)
{
    return sp->arr[0];
}

void main()
{
    Stack *s;
    int size;
    printf("Enter the size of the stack\n");
    scanf("%d", &size);
    s->size = size;
    s->top = -1; // default for stack index.
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully\n");

    // pushing elements into stack by PUSH function.
    PUSH(s, 4);
    PUSH(s, 5);
    PUSH(s, 6);
    PUSH(s, 7);
    PUSH(s, 8);
    PUSH(s, 9);
    PUSH(s, 10);
    PUSH(s, 12);

    printf("Element at Position 1 is %d\n", Peek(s, 1)); // here position is from down of the stack.
    printf("Element at Position 2 is %d\n", Peek(s, 2));
    printf("Element at Position 3 is %d\n", Peek(s, 3));
    printf("Element at Position 7 is %d\n", Peek(s, 7));

    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    // printf("Popped: %d\n", POP(s));
    printf("Topmost value of stack is %d\n", stackTop(s));
    printf("Bottommost value of stack is %d\n", stackBottom(s));
}
