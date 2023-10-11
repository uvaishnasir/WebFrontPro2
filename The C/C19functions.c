#include <stdio.h>
//the Uv-- Functions-- 22/05/2021

int sum(int a, int b)
{
    return a + b;
}

int takenumber()
{
    int i;
    printf("Enter the number\n");
    scanf("%d", &i);
    return i;
}

void printstar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("\n%c", '*');
    }
}
void printhash()
{
    for (int j = 0; j < 5; j++)
    {
        printf("\n%c", '#');
    }
}

void main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("the sum is %d\n", sum(a, b));
    printf("Number entered is %d", takenumber());
//     printstar(5);
//     printhash(); 
}