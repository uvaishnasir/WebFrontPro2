#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[], int size)
{
    if (size == 1)
        return;

    for (int i = 0; i < size - 1; i++)  //one pass for bubble sort.
    {
        if (arr[i] > arr[i + 1])
            swap(&arr[i], &arr[i + 1]);
    }                          // largest element is fixed.
    BubbleSort(arr, size - 1); // recursion for remaining passes.
}

void main()
{
    int arr[] = {25, 2, 5, 10, 15, 8, 9, 6, 7, 3, 4, 1, 20}, n;
    int size = sizeof(arr) / sizeof(int);
    printf("***The Array is:\n");
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
    BubbleSort(arr, size);
    printf("\n***After Bubble Sort by recursion the Array is:\n");
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
}