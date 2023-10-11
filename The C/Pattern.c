#include <stdio.h>
//tHe-Uv--print pattern-07/06/2021
/* 1
   2 2
   3 3 3 */
void main()
{
    int n, m = 1;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", m);
        }
        ++m;
        printf("\n");
    }
}