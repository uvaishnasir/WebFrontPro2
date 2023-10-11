#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &A,int low, int high, int mid)
{
    int i = low, k = low, j = mid + 1, B[high + 1];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while (i <= mid)
        B[k++] = A[i++]; // copy all remaining element from left A to B.
    while (j <= high)
        B[k++] = A[j++]; // copy all remaining element from right A to B.
    for (int n = low; n <= high; n++)
        A[n] = B[n];
}
void MergeSort(vector<int> &A, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        MergeSort(A, left, mid);
        MergeSort(A, mid + 1, right);
        Merge(A, left, right, mid);
    }
}

int main()
{
    vector<int> v;
    cout << "Enter the elements of array and write stop to exit\n";
    while (true)
    {
        string x;
        cin >> x;
        if (x == "stop")
            break;
        else
            v.push_back(stoi(x));
    }
    MergeSort(v, 0, v.size());
    cout << "After Merge sort the array is:\n";
    for (auto x : v)
        cout << x << " ";
}