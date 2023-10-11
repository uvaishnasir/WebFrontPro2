#include <bits/stdc++.h>
using namespace std; //         //Function Templates.

// float funcAvg(int a, int b)
// {
//     return (a + b) / 2.0;
// }

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    return (a + b) / 2.0;
}

template <class T>
void swapp(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    float avg = funcAvg(5, 8.5);
    cout << "Average: " << avg << endl;
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << " & " << y << endl;
}