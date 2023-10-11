#include <bits/stdc++.h>
using namespace std; // Single Inheritance.

class Base
{
    int data1; // Private by default.

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 7;
    data2 = 20;
}
int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}

class Derived : private Base // Inherited.
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    setData();                  // Derived method is private so invoked under the derived class method.
    data3 = data2 * getData1(); // data1 is private so invoked by method.
}

void Derived::display()
{
    cout << "The Data1 is " << getData1() << endl;
    cout << "The Data2 is " << data2 << endl;
    cout << "The Data3 is " << data3 << endl;
}

int main()
{
    Derived d1;
    // d1.setData();      //Not accessible when class derived privately.
    d1.process();
    d1.display();
}