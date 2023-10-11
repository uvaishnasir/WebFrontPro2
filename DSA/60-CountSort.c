#include <stdio.h>
#include <stdlib.h>
#include <limits.h>      //count sort algo.

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
}

int maximum(int *A, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    return max;
}

void countSort(int *A, int n)
{
    int max = maximum(A, n), i, j;
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (i = 0; i <= max; i++)
        count[i] = 0;
    for (i = 0; i < n; i++)
        count[A[i]]++;
    printf("\nCount array\n");
    printArray(count, (max + 1));
    i = j = 0; // i counter for given array & j counter for count array.
    while (j < (max + 1))
    {
        if (count[j] > 0)
        {
            A[i++] = j;
            count[j]--;
        }
        else
            j++;
    }
}

void main()
{
    int arr[] = {6, 8, 1, 7, 9, 3, 4, 2, 5, 8}; // Unsorted array.
    int size = sizeof(arr) / sizeof(int);
    printf("The array is:\n");
    printArray(arr, size);
    printf("\nMaximum element: %d\n", maximum(arr, size));
    countSort(arr, size);
    printf("\nAfter Count Sort....\n");
    printArray(arr, size);
}
