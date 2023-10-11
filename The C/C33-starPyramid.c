#include <stdio.h>
//full Pyramid of Star in 180 degree.
void main()
{
    int rows;
    printf("Enter the max. no. of stars to get Pyramid\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    //opposite pyramid.

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* "); // print the Star
        }
        printf("\n");
    }
    for (int i = 1; i < rows; ++i)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= rows - i; k++)
        {
            printf("* "); // print the Star
        }
        printf("\n");
    }
    //full simple Pyramid of Star.
    printf("\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}