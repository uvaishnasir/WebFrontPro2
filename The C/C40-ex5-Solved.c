#include <stdio.h> //UV- 06/07/2021
void arrayrev(int arr[], int n)
{
    for (int i = 0; i < 9 / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
void main()
{
    int array[] = {3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("Before reversing the array is:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", array[i]);
    }
    arrayrev(array, 9);
    printf("\nAfter reversing the array is:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", array[i]);
    }
}