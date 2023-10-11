#include<stdio.h>
// int a=5;
int func1(int a)
{
    static int b=10;
    a=23;
    printf("The value of b is %d\n",b);
    b++;
    // printf("The address of a inside func1 is %d\n",&a);
}

void main()
{
    int a=21;
    // printf("The address of a inside main is %d\n",&a);
    func1(a);
    func1(a);
    func1(a);
    func1(a);
    func1(a);
    
}