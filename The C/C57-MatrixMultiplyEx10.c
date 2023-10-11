#include <stdio.h> //tHe-UV-23/07/2021
void main()
{
    int m1[5][5], m2[5][5], result[5][5] = {0}, r1, c1, r2, c2;
    printf("Enter the order of 1st matrix in the form of RxC:\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the order of 2nd matrix in the form of RxC:\n");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
        printf("Sorry! The Matrix multiplication doesn't hold.\n");
    else
    {
        printf("\n***Enter elements of 1st Matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter the element at position %d%d\n", i, j);
                scanf("%d", &m1[i][j]);
            }
        }
        printf("\n***Enter elements of 2nd Matrix:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter the element at position %d%d\n", i, j);
                scanf("%d", &m2[i][j]);
            }
        }
    }
    for (int i = 0; i < r1; i++) //here two loops start outer for row of resulting matrix as order of r1Xc2.
    {
        for (int j = 0; j < c2; j++)  //inner for column.
        {
            for (int k = 0; k < c1; k++) //This loop for multiply. Here you can select c1 or r2 as c1==r2.
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("***Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n\n");
    }
}