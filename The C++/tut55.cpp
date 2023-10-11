#include <bits/stdc++.h>
using namespace std; // Pointer to derived class...

class Base
{
public:
    int varBase;
    void display()
    {
        cout << "Displaying the Base class data varBase is " << varBase << endl;
    }
};

class Derived : public Base
{
public:
    int varDerived;
    void display()
    {
        cout << "Displaying the Base class data varBase is " << varBase << endl;
        cout << "Displaying the Derived class data varDerived is " << varDerived << endl;
    }
};

int main()
{
    Base *BaseClassptr;
    Base Obj_Base;
    Derived ObjDerived;
    BaseClassptr = &ObjDerived; // Base class pointer Pointing to the derived class object & It's Legal.
    BaseClassptr->varBase = 786;
    // BaseClassptr->varDerived = 6; // ERROR, Illegal in C++.

    BaseClassptr->display(); // Binding with Base class display() function.

    // BaseClassptr->varBase = 34;
    // BaseClassptr->display();
    Derived *DerivedClassPtr;
    DerivedClassPtr = &Obj_Base;
    DerivedClassPtr = &ObjDerived; // Invalid conversion from 'Base*' to 'Derived*'. It's Illegal.
    DerivedClassPtr->varBase = 34;
    DerivedClassPtr->varDerived = 8765;
    DerivedClassPtr->display(); // Binding with derived class display() function.
}