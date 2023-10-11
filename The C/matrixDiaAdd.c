#include <stdio.h>

void main()
{
    int a[5][5], i, j, m, n, s = 0;
    printf("Enter the order of matrix in the form of RxC\n");
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the value of element %d%d\n", i, j);
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                s = s + a[i][j];
            }
        }
    }
    printf("Sum of Diagonal elements = %d", s);
}
