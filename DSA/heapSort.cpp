#include <bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int> &v, int n, int i)
{
    int max = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && v[left] > v[max])
        max = left;

    if (right < n && v[right] > v[max])
        max = right;

    if (max != i)
    {
        swap(v[max], v[i]);
        maxHeapify(v, n, max); 
    }
}
void HeapSort(vector<int> &v, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(v, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(v[i], v[0]);
        maxHeapify(v, i, 0);
    }
}

int main()
{
    int n;
    cout << "Enter the no. of elements\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the " << n << " elements\n";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    HeapSort(v, n);
    cout << "Array elements after HeapSort\n";
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

// int main()     //USING STL HEAP-SORT
// {
//     int n;
//     cout << "Enter the no. of elements for bulding the minHeap\n";
//     cin >> n;
//     vector<int> v;

//     while (n--)   //TC = n;
//     {
//         int x;
//         cout << "Enter the element\n";
//         cin >> x;
//         minHeap.push(x);    //TC = log(n);
//     }

//     while (minHeap.empty() == false)
//     {
//         int e = minHeap.top();
//         minHeap.pop();
//         v.push_back(e);
//     }
//     cout << "Array elements after HeapSort\n";
//     for (auto x : v)
//         cout << x << " ";
//     cout << endl;
// }