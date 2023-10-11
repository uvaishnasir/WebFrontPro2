#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

class Employee
{
    int ID;
    static int count;

public:
    void setData()
    {
        cout << "Enter the ID\n";
        cin >> ID;
        count++;
    }
    void getData()
    {
        cout << "The Employee number " << count << " ID is " << ID << endl;
    }
    static void getCount()
    {
        cout << "The value of count by static functions is " << count << endl;
        // cout << ID; // throw an error.
    }
};

// count is the static data member of class employee.
int Employee::count; // default value is 0;

int main()
{
    Employee p1, p2, p3;
    p1.setData();
    p1.getData();
    Employee::getCount();

    p2.setData();
    p2.getData();
    Employee::getCount();

    p3.setData();
    p3.getData();
    Employee::getCount();

    // Employee::getData(); // cannot call member function Employee::getData() without object.
}
