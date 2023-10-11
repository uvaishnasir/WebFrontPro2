#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int arr[][5] = {{4, 9, 5, 2, 3}, 
                    {7, 8, 9, 6, 4}, 
                    {8, 3, 9, 5, 2}, 
                    {2, 1, 7, 3, 9}, 
                    {4, 1, 6, 7, 2}};
    int rows = 5;
    printf("***Printing the upper triangle of matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < rows; j++)
        {    
            if(j>=i)
            printf("%d ",arr[i][j]); // print the upper triangle matrix
        }
        printf("\n");
    }
    printf("\n***Printing the lower triangle of matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
