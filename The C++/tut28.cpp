#include <bits/stdc++.h>
using namespace std;

// class y;

// class x
// {
//     int data;

// public:
//     void setData(int n)
//     {
//         data = n;
//     }
//     friend void add(x, y);
// };

// class y
// {
//     int value;

// public:
//     void setData(int n)
//     {
//         value = n;
//     }
//     friend void add(x, y);
// };

// void add(x o1, y o2)
// {
//     cout << "Summing data of class x & y gives " << (o1.data + o2.value);
// }

class c2;
class c1
{
    int val1;
    friend void exchangeData(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchangeData(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exchangeData(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    // x a;
    // a.setData(5);

    // y b;
    // b.setData(7);

    // add(a, b);

    c1 o1;
    c2 o2;
    o1.indata(34);
    o2.indata(47);

    o1.display();
    o2.display();

    exchangeData(o1, o2);

    cout << "After exchange the value of o1 & o2 is-\n";
    o1.display();
    o2.display();
}