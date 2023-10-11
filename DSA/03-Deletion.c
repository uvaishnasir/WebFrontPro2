#include <stdio.h> //tHeUV

void Deletion(int arr[], int index, int size)
{
    //Deletion code.
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void main()
{
    int arr[50], n, index;
    printf("Enter the no of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("At position %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("***Before Deletion the Array is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nAt which index you want to delete element\n");
    scanf("%d", &index);
    Deletion(arr, index, n);
    printf("\n***After Deletion the Array is:\n");
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
}