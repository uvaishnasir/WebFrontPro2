#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);
}

void insertionSort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i <= (n - 1); i++) // loop for the passes(n-1)
    {
        key = arr[i];
        j = i - 1;
        while (arr[j] > key && j >= 0) // loop for each pass. //for descending order use less than key.
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void main()
{
    int arr[] = {5, 8, 1, 6, 9, 7, 3, 4, 2}; // Unsorted array.
    int size = sizeof(arr) / sizeof(int);
    printf("The array is:\n");
    printArray(arr, size);
    insertionSort(arr, size);
    printf("\nBy Insertion Sort the array is:\n");
    printArray(arr, size);
}