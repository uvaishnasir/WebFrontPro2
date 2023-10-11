#include <bits/stdc++.h>
using namespace std;

// new & delete keyword.

int main()
{
    // new operator.
    int *p = new int(40);
    cout << "The value at address p is " << *p << endl;
    delete p; // delete operator
    float *ptr = new float(87.54);
    cout << "The value at address ptr is " << *ptr << endl;
    delete ptr; // delete pointer.

    int *arr = new int[4];
    arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    delete[] arr; // delete array memory.
}