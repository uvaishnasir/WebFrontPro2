#include <bits/stdc++.h>
using namespace std; // Constructors in Derived class.
/*
Case1:
class B: public A{
    //order of cons... execution--> first A() then B().
};
Case2:
class A: public B, public C{
    //order of cons... execution--> B() then C() then A().
};
Case3:
class A: public B, virtual public C{
    //order of cons... execution--> C() then B() then A().
};
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class cons.. executed\n";
    }
    void printDataBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class cons.. executed\n";
    }
    void printDataBase2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base2, virtual public Base1 // Case:3
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a) // Here Order doesn't matter.
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class cons.. executed\n";
    }
    void printDataDerived()
    {
        cout << "The value of derived1 is " << derived1
             << "\nThe value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived uv(1, 2, 3, 4);
    uv.printDataBase1();
    uv.printDataBase2();
    uv.printDataDerived();
}