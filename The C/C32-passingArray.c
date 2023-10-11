#include <stdio.h> //UV-29/06/2021
void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
       printf("The value at %d is %d\n", i, array[i]);
    }
    array[0]=21;                                  //--it will reflect the value in main() function.
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 3) = 28;
}

void func3(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The value at %d%d is %d\n", i, j, arr[i][j]);
        }
    }
    arr[2][2] = 2;
}
void main()
{
    int arr[3][3] = {{3, 2, 1}, {1, 2, 3}, {2, 1, 3}};
    // func1(arr);
    // printf("Now The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    func3(arr);
    printf("Now The value at index 22 is %d\n", arr[2][2]);
}