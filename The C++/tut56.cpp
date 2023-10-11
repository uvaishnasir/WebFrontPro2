#include <bits/stdc++.h>
using namespace std; // Virtual Functions.

class Base
{
public:
    int varBase = 1;
    void virtual display() // virtual display().
    {
        cout << "B-Displaying the Base class data varBase is " << varBase << endl;
    }
};

class Derived : public Base
{
public:
    int varDerived = 2;
    void display()
    {
        cout << "D-Displaying the Base class data varBase is " << varBase << endl;
        cout << "D-Displaying the Derived class data varDerived is " << varDerived << endl;
    }
};

int main()
{
    Base *BaseClassptr;
    Base ObjBase;
    Derived ObjDerived;
    BaseClassptr = &ObjDerived;
    BaseClassptr->display(); // It will show derived class display function.
}