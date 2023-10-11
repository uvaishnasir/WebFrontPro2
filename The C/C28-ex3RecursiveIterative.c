#include <stdio.h> //28/06/2021
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
        return (fib_recursive(n - 1) + fib_recursive(n - 2));
}
int fib_iterative(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i < n; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
void main()
{
    int n;
    printf("Enter the index to get Fibonacci series\n");
    scanf("%d", &n);
    printf("By Iterative method value of index no %d = %d\n", n, fib_iterative(n));
    printf("By Recursive method value of index no %d = %d\n", n, fib_recursive(n));
}
