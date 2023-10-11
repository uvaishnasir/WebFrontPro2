#include <stdio.h>     //LinearRecursive
int linearSearch(int arr[], int size, int item)
{
    if (size >= 0)
    {
        if (arr[size] == item)
            return size;
        return linearSearch(arr, size - 1, item);
    }
    return -1;
}
void main()
{
    int arr[50], n, element, recur;
    printf("Enter the no of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element you want to search in the array\n");
    scanf("%d", &element);
    recur = linearSearch(arr, n, element);
    if (recur == -1)
        printf("The element %d not founded\n", element);
    else
        printf("The element %d was founded at index %d\n", element, recur);
}