#include <stdio.h> //BinarySearch(Non-recursive).

void main()
{
    int arr[50], n, element, low = 0, high, mid;
    printf("Enter the no of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of array in the sorting order\n");
    for (int i = 0; i < n; i++)
    {
        printf("At position %d\n", i);
        scanf("%d", &arr[i]);
    }
    high = n;
    printf("Enter the element you want to search in the array\n");
    scanf("%d", &element);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (element == arr[mid])
        {
            printf("Element was founded at index %d\n", mid);
            break;
        }
        else if (element > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
}