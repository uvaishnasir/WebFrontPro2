#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct myArray
{
    int total_size, used_size;
    int *ptr;
};

void creatArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setValue(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element at %d\n", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
        printf("%d\t", (a->ptr)[i]);
}

void main()
{
    struct myArray marks;
    int us, ts;
    printf("Enter the total size of Array\n");
    scanf("%d", &ts);
    printf("Enter the used size less than the total size\n");
    scanf("%d", &us);
    creatArray(&marks, ts, us);
    printf("We're running SetValue now\n");
    setValue(&marks);
    printf("We're running Show now\n");
    show(&marks);
}