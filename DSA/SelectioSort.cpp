#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &A, int n)
{
    int indexOfMin;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
                indexOfMin = j;
        }
        swap(A[i], A[indexOfMin]);
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
    SelectionSort(v, v.size());
    cout << "After selection sort the array is:\n";
    for (auto x : v)
        cout << x << " ";
}