#include <stdio.h>
// tHe Uv- prime-number-printer-
void main()
{
    int i,j,n;
    printf("Enter the number! under that you want to print all prime numbers\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            printf("%d\t", i);
        }
    }
}