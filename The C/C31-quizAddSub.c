//28/06/2021
// void changevalue(int*add)
// {
//     printf("Enter the new value of a\n");
//     scanf("%d",&*add);
// }
// void main()
// {
//     int a=7;
//     printf("The value of a is %d\n",a);
//     changevalue(&a);
//     printf("Now The updated value of a is %d\n",a);

// }
#include <stdio.h>
void addsub(int *x, int *y)
{
    *x = *x + *y;
    *y = (*x - *y) - *y; //old x= x-y
}
void main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    addsub(&a, &b);
    printf("After adding a = %d\n", a);
    printf("After subtracting b= %d\n", b);
}