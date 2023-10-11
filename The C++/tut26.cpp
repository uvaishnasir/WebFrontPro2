#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

class Complex
{
    int RP, IP;

public:
    void setRPIP(int a, int b)
    {
        RP = a;
        IP = b;
    }
    friend Complex SumComplex(Complex, Complex);
    /*Properties of friend function
    1. Not in the scope of class.
    2. So it cannot be called from the object of that class. c1.sumComplex()===INVALID.
    3. Can be invoked without help of object.
    4. Usually contains the objects as arguments.
    5. Can be declared inside public or private section of the class.
    6. It can't be access the members directly by their names it needs the objectname.membersname to acces them.
    */
    void printComplex()
    {
        cout << "Complex number is " << RP << " + " << IP << "i" << endl;
    }
};

Complex SumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setRPIP((o1.RP + o2.RP), (o1.IP + o2.IP));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setRPIP(7, 3);
    c1.printComplex();

    c2.setRPIP(3, 7);
    c2.printComplex();

    sum = SumComplex(c1, c2);
    sum.printComplex();
}