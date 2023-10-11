#include<stdio.h>
#include"C54-danglingPtr.c"


#define PI 3.14
#define square(a) a*a
void main()
{
    float p= PI;
    int r=7;
    printf("Its the PI= %f\n",p);
    int *ptr= dangfunction();
    printf("The area of circle is %f\n", PI*square(r));


    
}