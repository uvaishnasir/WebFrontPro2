#include <stdio.h> //tHeUv
                   //code for Bubble Sort.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)    //n-1 passes.
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void main()
{
    int arr[] = {40, 99, 5, 20, 70, 8, 9, 6, 80, 30, 90, 50, 2, 10, 7, 3, 4, 1, 60};
    int size = sizeof(arr) / sizeof(int);
    printf("Size of the array is %d\n", size);
    printf("***Before Bubble Sorting the Array is:\n");
    printArray(arr, size);
    bubbleSort(arr, size);
    printf("\n***Aftrer Bubble Sorting the Array is:\n");
    printArray(arr, size);
}