#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
}

int partition(int *A, int low, int high)
{
    int temp, i = low + 1, j = high, pivot = A[low];
    do
    {
        while (A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;
        if (i < j)
        {
            temp = A[i]; // swap A[i] & A[j].
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low]; // swap A[j] to A[low] here change occur in array..
    A[low] = A[j];
    A[j] = temp;
    return j; // return index of partition element.
}

void quickSort(int *A, int low, int high)
{
    int indexPartition;
    if (low < high)
    {
        indexPartition = partition(A, low, high); // return the index of partitioned subarray.
        quickSort(A, low, indexPartition - 1);    // quicSort left subarray
        quickSort(A, indexPartition + 1, high);   // quicSort right subarray.
    }
}

void main()
{
    int arr[] = {6, 8, 1, 7, 3, 4, 2, 5}; // Unsorted array.
    int size = sizeof(arr) / sizeof(int);
    printf("The array is:\n");
    printArray(arr, size);
    quickSort(arr, 0, size - 1);
    printf("\nQuick Sort is running....\n");
    printArray(arr, size);
}