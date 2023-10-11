#include <stdio.h>
#include <stdlib.h>
int sum=786;
int *dangfunction()
{
    int a = 786, b = 14;
    int sum2 = a + b;
    return &sum;
}

void main2()
{
    // case:1-De-allocation of memory.
    int *ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int i = 0; i < 5; i++)
    {
        printf("Value at a position %d is %d\n", i, *(ptr + i));
    }
    free(ptr);  //ptr is now dangling pointer. It will print garbage value.
    ptr = NULL; //ptr is now NULL pointer.

    // case:2-function returning the local variable address.
    int *dangptr = dangfunction(); // dangptr is now a dangling pointer.
    printf("%d\n", *dangptr);

    // case:3-If a variable goes out of scope.
    int *dangptr3;
    {
        int a = 7;
        dangptr3 = &a;
    }
    // Here variable a goes out of scope which means that dangptr3 is now pointing the freed address.
    printf("%d\n", *dangptr3); //not print
}