#include <bits/stdc++.h>
using namespace std; //       // Templates with default parameters.

template <class T1 = int, class T2 = float, class T3 = char>
class UV
{
    T1 a;
    T2 b;
    T3 c;

public:
    UV(T1 A, T2 B, T3 C)
    {
        a = A;
        b = B;
        c = C;
    }
    void display()
    {
        cout << "\nThe value of data type a is " << a << endl;
        cout << "The value of data type b is " << b << endl;
        cout << "The value of data type c is " << c << endl;
    }
};

int main()
{
    UV<> u(7, 7.8, 'U');
    u.display();

    UV<float, char, char> v(9.9, 'u', 'v'); // You can pass your own data types in default parameters templates.
    v.display();
}