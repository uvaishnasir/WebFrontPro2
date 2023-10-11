#include <stdio.h>
#include <string.h>
void main()
{
    int a = 786, c=78;
    int *ptr=NULL;
    if (ptr==NULL)
    {
        printf("The pointer is a null pointer can't be dereferenced\n");
    }
    else
    {
        printf("The value of a is %d\n", *ptr);
        printf("The address of a is %d\n", ptr);
    }  
    
}