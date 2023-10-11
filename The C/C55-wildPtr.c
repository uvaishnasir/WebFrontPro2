#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a = 786;
    int *ptr; //This is a wild pointer.
    //*ptr = a;      //This is not good to do.
    ptr = &a; //Now! ptr is not a wild pointer.
    printf("The value of a is %d\n", *ptr);
    int b = 1; //          3, 2, 1
    printf("%d,%d,%d\n", ++b, b, b++);
    //                     3, 3, 1
    int i = 5;
    //          6     6
    // int c = ++i + i++;
    //          7  +   6  =  13
    // printf("%d\n", c);  //13

    // int e = i++ + ++i;
    // printf("%d\n", e);  //12

    // int d = ++i + ++i;
    // printf("%d\n",d);   //14

    // int e = i++ + i++;
    // printf("%d\n", e);  //11

    // int f = --i + i--;
    // printf("%d\n",f);   //7

    // int f = i-- + --i;
    // printf("%d\n",f);   //8
}