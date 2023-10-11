#include <stdio.h>    //BinaryRecursive
int BinarySearch(int arr[], int low, int high, int item)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == item)
            return mid;
        if (item < arr[mid])
            return BinarySearch(arr, low, mid - 1, item);
        else
            return BinarySearch(arr, mid + 1, high, item);
    }
}
void main()
{
    int arr[50], n, element, recur;
    printf("Enter the no of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements in sorted order.\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element you want to search in the array\n");
    scanf("%d", &element);
    recur = BinarySearch(arr, 0, n - 1, element);
    if (recur == -1)
        printf("The element %d not founded\n", element);
    else
        printf("The element %d was founded at index %d\n", element, recur);
}