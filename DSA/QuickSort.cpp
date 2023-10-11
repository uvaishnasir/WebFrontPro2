#include <bits/stdc++.h>
using namespace std;

int partition(int *A, int low, int high)
{
    int pivot = A[low], i = low + 1, j = high;
    do
    {
        while (A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    } while (i < j);
    swap(A[low], A[j]); // swap A[j] to A[low] here change occur in array..
    return j;           // return index of partition element.
}

void quickSort(int *A, int low, int high)
{
    if (low < high)
    {
        int indexPartition = partition(A, low, high); // return the index of partitioned subarray.
        quickSort(A, low, indexPartition - 1);    // quicSort left subarray
        quickSort(A, indexPartition + 1, high);   // quicSort right subarray.
    }
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    quickSort(arr , 0, 8);


}