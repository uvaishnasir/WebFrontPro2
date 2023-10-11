#include <stdio.h>
//the-Uv--03/06/2021--Fibonacci-series.

void main()
{
    int num, a = -1, b = 1, c;
    printf("Enter the number of terms of Fibonacci-series you want to print:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\t", c);
    }
}
