#include <bits/stdc++.h>
using namespace std; // Inheritance.

// Base class.
class Employee
{
public:
    int ID;
    float salary;
    Employee()
    {
        salary = 3400.0;
    }
    Employee(int inId)
    {
        ID = inId;
        salary = 5000;
    }
    void getData()
    {
        cout << "ID is " << ID << endl;
        cout << "Salary is " << salary << endl;
    }
};

// Derived class syntax.
/*
class {{Derived-class-name}} : {{Visibility-mode}} {{Base-class-name}}
{
    class members/methods/etc.......
}
NOTE:
1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class.
4. Private members are NEVER inherited.
*/

// creating the Programmer class derived from Employee base class.
class Programmer : public Employee // If no mode mention, Default mode treat as private.
{
public:
    int PlanguageCode;
    Programmer(int inID)
    {
        ID = inID;
        PlanguageCode = 7;
    }
};

int main()
{
    Employee E1(1), E2(2);

    Programmer uv(8);

    E1.getData();
    E2.getData();

    uv.getData(); // if mode is private, it threw error.

    cout << "\nUV language Code is " << uv.PlanguageCode << endl;
}