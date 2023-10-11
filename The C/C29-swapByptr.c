#include <stdio.h>   //28/06/2021
void swap(int*x, int*y)
{ 
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("Numbers entered are %d & %d\n", a, b);
    swap(&a,&b);  //call by reference.
    printf("After swapping Numbers are %d & %d\n", a, b);
}