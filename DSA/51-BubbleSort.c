#include <stdio.h> //tHeUv
                   //code for Bubble Sort.
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSortAdaptive(int *arr, int n)
{
    int isSorted;
    for (int i = 0; i < n - 1; i++) // for no. of pases.
    {
        printf("\nWorking pass no: %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for comparison in each pass.
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSorted = 0;
            }
        }
        if (isSorted)
            return;
    }
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void main()
{
    int arr[] = {40, 99, 5, 20, 70, 8, 9, 6, 80, 30, 90, 50, 2, 10, 7, 3, 4, 1, 60}; // Unsorted array.
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 99};   //sorted array.
    int size = sizeof(arr) / sizeof(int);
    printf("Size of the array is %d\n", size);
    printf("***Before Bubble Sorting the Array is:\n");
    printArray(arr, size);
    bubbleSortAdaptive(arr, size);
    printf("\n***Aftrer Bubble Sorting the Array is:\n");
    printArray(arr, size);
}