#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int Re, Im;

public:
    void setData(int a, int b)
    {
        Re = a;
        Im = b;
    }
    void getData()
    {
        cout << "The Real part is " << Re << endl;
        cout << "Imaginary part is " << Im << endl;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // c1.setData(6, 9);
    // c1.getData();
    (*ptr).setData(7, 8);
    (*ptr).getData();
    ptr->setData(4, 6);
    ptr->getData();

    // Array of Object.
    Complex *ptr1 = new Complex[3];
    ptr1->setData(3, 2);
    ptr1->getData();
    (ptr1 + 1)->setData(10, 5);
    (ptr1 + 1)->getData();
}