#include <stdio.h> //11/07/2021-UV      dynamic memory allocation. DMA
#include <stdlib.h>

void main()
{
    //use of Mallok
    int *ptr, n;
    printf("Enter the size of an array you want to create\n");
    scanf("%d", &n);
    ptr=malloc(n*4);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at position %d\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("***Printing the elements of array:-\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("The value at position %d is %d\n",i, ptr[i]);
    }
    free(ptr);

    // use of Callok
    printf("Enter the size of an array you want to create\n");
    scanf("%d", &n);
    ptr=calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at position %d\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("***Printing the elements of array:-\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("The value at position %d is %d\n",i, ptr[i]);
    }

    //use of Reallok
    printf("Enter the new size of an array you want to create\n");
    scanf("%d", &n);
    ptr=realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value at position %d\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("***Printing the elements of array:-\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("The new value at position %d is %d\n",i, ptr[i]);
    }
    free(ptr);
}