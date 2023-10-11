#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, i = 0;
    int *ptr;
    while (i < 50000)
    {
        printf("Welcome tHe Uv's while Loop\n");
        ptr = malloc(3000 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(ptr);  //if you not free the pointer ptr you'll face the situation of memory leak.

    }
}