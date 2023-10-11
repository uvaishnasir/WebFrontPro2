#include <bits/stdc++.h>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int n)
    {
        a = n;
    }
    // when no copy cons... is found, compiler supplies its own copy constructor.
    Number(Number &obj)
    {
        cout << "User copy constructor invoked.\n";
        a = obj.a;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
};

int main()
{
    Number x, y, z(5), z2; // default cons. and one argument cons invoked and set number x,y,z2 to 0 & z 5.
    x.display();

    y.display();

    z.display();

    Number z1(z); // copy cons... invoked & set number z1 to x/y/z. you can pass.
    z1.display();

    z2 = z; // copy cons... not invoked.
    z2.display();

    Number z3 = z; // copy cons...  invoked.
    z3.display();
}