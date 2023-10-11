#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Difference
{
private:
    int elements[10];

public:
    int max, min;

    Difference(int arr[])
    {
        *this->elements = *arr;
    }
    int computeDifference(int *arr, int size)
    {
        max = arr[0], min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            else if (arr[i] < min)
                min = arr[i];
        }
        return max - min;
    }

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    Difference d(arr);
    cout << d.computeDifference(arr, N);

    return 0;
}