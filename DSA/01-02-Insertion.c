#include <stdio.h> //tHeUV

void insertion(int arr[], int element, int index, int size)
{
    //Insertion code.
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

void main()
{
    int arr[50], n, element, index, p;
    printf("Enter the no of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("At position %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to insert\n");
    scanf("%d", &element);
    printf("At which index\n");
    scanf("%d", &index);
    printf("***Before Insertion the Array is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    insertion(arr, element, index, n);
    printf("\n***After Insertion the Array is:\n");
    for (int i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);
}