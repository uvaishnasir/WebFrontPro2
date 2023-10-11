#include <stdio.h>
int sum = 786;
void func(int a, int b)
{
    sum= a+b;
    // static int sum;
    // extern int sum;
    // register int sum =a+b;
    printf("Sum is %d\n", sum);
}
void main()
{
    //Declaration - Telling the compiler about the variable(No space reserved)
    //Definition - Declaration + space reserved.
    printf("Sum is %d\n", sum);
    func(4, 6);
}

int myfunc()
{
    return 0;
}