#include <bits/stdc++.h>
using namespace std;
// Syntax for Multiple Inheritance.
/* class Derived: visibility-mode Base1, visibility-mode Base2, visibility-mode Base3.......................
{
   class body of derived class.
}
*/
class Base1
{
protected:
    int base1;

public:
    void set_base1(int b1)
    {
        base1 = b1;
    }
};
class Base2
{
protected:
    int base2;

public:
    void set_base2(int b2)
    {
        base2 = b2;
    }
};
class Base3
{
protected:
    int base3;

public:
    void set_base3(int b3)
    {
        base3 = b3;
    }
};

class Derived : public Base1, public Base2, public Base3 // Multilevel Inheritance.
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1 << endl;
        cout << "The value of Base2 is " << base2 << endl;
        cout << "The value of Base3 is " << base3 << endl;
        cout << "The Sum is " << base1 + base2 + base3 << endl;
    }
};
/*
The inherited derived class will look like this.
DATA members:
            int base1-->protected
            int base2-->protected
            int base3-->protected
Members functions:
            set_base1()-->public
            set_base2()-->public
            set_base3()-->public
            show()-->public
*/
int main()
{
    Derived d1;
    d1.set_base1(70);
    d1.set_base2(25);
    d1.set_base3(5);
    d1.show();
}