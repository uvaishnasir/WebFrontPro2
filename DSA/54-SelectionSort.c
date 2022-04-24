#include <stdio.h>
// selection sort.

void SelectionSort(int *A, int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
}

void main()
{
    int arr[] = {6, 8, 1, 7, 3, 4, 2, 5}; // Unsorted array.
    int size = sizeof(arr) / sizeof(int);
    printf("The array is:\n");
    printArray(arr, size);
    SelectionSort(arr, size);
    printf("\nRunning Selection sort:\n");
    printArray(arr, size);
}