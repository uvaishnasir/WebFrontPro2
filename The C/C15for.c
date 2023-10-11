#include <stdio.h>
//for loop
//18/05/2021

int main()
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < 3, j < 5, k < 8; j++, i++, k++)
    {
        printf("%d %d %d\n", i, j, k);
    }

    return 0;
}