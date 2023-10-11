#include <stdio.h>
//the-Uv--03/06/2021--Fibonacci-series.
int fib_recursive(int n)
{
    if (n == 1||n == 2)
        return n-1;
    else
        return (fib_recursive(n - 1) + fib_recursive(n - 2));
}
void main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", fib_recursive(i));
    }
}
