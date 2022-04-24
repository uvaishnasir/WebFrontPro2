#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
}

void Merge(int A[], int mid, int low, int high)
{
    // printf("Merging....\n");
    int i = low, k = low, j = mid + 1, B[high + 1];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while (i <= mid)
        B[k++] = A[i++]; // copy all remaining element from left A to B.
    while (j <= high)
        B[k++] = A[j++]; // copy all remaining element from right A to B.
    for (int n = low; n <= high; n++)
        A[n] = B[n]; // return all elements from B to A.
}

void MS(int arr[], int low, int high)
{
    int mid;
    // printf("MergeSort....\n");
    if (low < high)
    {
        mid = (low + high) / 2;
        MS(arr, low, mid);      // MS on left half.
        MS(arr, mid + 1, high); // MS on right half.
        Merge(arr, mid, low, high);
    }
}

void main()
{
    int arr[] = {6, 8, 1, 7, 95, 3, 4, 2, 5, 87}; // Unsorted array.
    int size = sizeof(arr) / sizeof(int);
    printf("The array is:\n");
    printArray(arr, size);
    printf("\nMerge Sort is running....\n");
    MS(arr, 0, size - 1);
    printArray(arr, size);
}