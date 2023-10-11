#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}

void greetHelloandExecute(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 10 & 8 is %d\n", fptr(10, 8));
}
void greetGMandExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 10 & 8 is %d\n", fptr(10, 8));
}
int avg(int m, int n)
{
    return (m + n) / 2;
}
void greetGAandExecute(int (*fptr)(int, int))
{
    printf("Good Afternoon User\n");
    printf("The avg of 10 & 8 is %d\n", fptr(10, 8));
}
void greetGEandExecute(int (*fptr)(int, int))
{
    printf("Good Evening User\n");
    printf("The avg of 10 & 8 is %d\n", fptr(10, 8));
}

void main()
{
    int (*p)(int, int);
    p = sum;
    greetHelloandExecute(p);
    greetGMandExecute(p);
    int (*ptr)(int, int);
    ptr = avg;
    greetGAandExecute(ptr);
    greetGEandExecute(ptr);
}