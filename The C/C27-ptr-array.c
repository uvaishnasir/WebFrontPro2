#include <stdio.h>
void main()
{
    // char a= 'u';
    // char*ptr=&a;
    // printf("%d\n",ptr);
    // ptr++;
    // printf("%d\n",ptr);
    // printf("%d\n", ptr+2);
    // printf("%d\n", ptr-2);
    int a[] = {5, 10, 15, 20, 25};
    int *ptra = a;
    printf("Address of 0 element is %d\n", &a[0]);       //a = &a[0]
    printf("address of 0 element is %d\n", a);
    printf("address of 1 element is %d\n", a + 1);       //a+1 = &a[1]
    printf("Address of 1 element is %d\n", &a[1]);

    printf("Value of 0 element is %d\n", *ptra);
    printf("value of 0 element is %d\n", *a);
    printf("value of 0 element is %d\n", *&a[0]);         // *ptra = *a = *&a[0]
    printf("Value of 1 element is %d\n", *(ptra + 1));
    printf("Value of 1 element is %d\n", *(a + 1));
    printf("value of 1 element is %d\n", *&a[1]);        // *(ptra+1) = *(a+1) = *&a[1]
}