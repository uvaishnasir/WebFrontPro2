#include <stdio.h>

//the Uv--ARRAY-24/05/2021

int main()
{
    int marks[][4] = {{3, 2, 1, 0},
                      {1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {7, 8, 9, 0}};
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}