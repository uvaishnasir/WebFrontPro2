#include <bits/stdc++.h>
using namespace std; //   13/09/2022 .Tuesday

void InsertionSort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i <= (n - 1); i++) // loop for the passes(n-1)
    {
        key = arr[i];
        j = i - 1;
        while (arr[j] > key && j >= 0) // loop for each pass. //for descending order use less than key.
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    InsertionSort(v, v.size());
    cout << "After selection sort the array is:\n";
    for (auto x : v)
        cout << x << " ";
}
