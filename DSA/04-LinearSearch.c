#include <stdio.h>   //LinearSearch (Non-recursive).

void main()
{
    int arr[50], n, element, flag = 0;
    printf("Enter the no of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("At position %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search Linearly in the array\n");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            flag += i;
            break;
        }
    }
    if (flag == 0)
        printf("Sorry! Element not found.");
    else
        printf("***Element was founded at index %d\n", flag);
}