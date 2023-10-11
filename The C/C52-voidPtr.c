#include <stdio.h> //14/07/2021
#include <string.h>
void main()
{
    int a = 786;
    float b = 7.86;
    void *ptr;       //its a void pointer.
    ptr = &a;
    printf("The value of a is %d\n", *((int*)ptr));
    ptr = &b;
    printf("The value of b is %.3f\n", *((float*)ptr));
}