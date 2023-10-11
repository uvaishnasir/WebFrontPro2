#include <stdio.h> //function pointer--02/08/2021

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello User Khushamdeed. I hope you enjoy the function pointer.\n");
}

void main()
{
    printf("The sum of 5 & 6 is %d\n", sum(5, 6)); //test the function.
    int (*funcPtr)(int, int);                      //declaration of function pointer.
    funcPtr = &sum;                                //pointing the adress of function to the function Pointer.
    // int d = (*funcPtr)(9,6);                    //dereferencing the function pointer
    printf("The value after dereferencing the function pointer is %d\n", (*funcPtr)(9, 6));
    greet();
}