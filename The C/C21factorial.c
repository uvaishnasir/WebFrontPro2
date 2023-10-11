#include <stdio.h>

//the Uv-factorial--23/05/2021
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return (n * factorial(n - 1));
}

void main()
{
    int num;
    printf("Enter the number you want to factorial of:\n");
    scanf("%d", &num);
    printf("The Factorial of %d is %d\n", num, factorial(num));
}