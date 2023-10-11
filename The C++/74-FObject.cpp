#include <bits/stdc++.h>
using namespace std;

// Function Objects: Function wrapped in a class so that it available like an object.

int main()
{
    int arr[] = {19, 56, 8, 34, 57, 10, 5};
    // sort(arr, arr + 7);              //Ascending default.
    sort(arr, arr + 7, greater<int>()); // descending order
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}