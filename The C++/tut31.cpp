#include <bits/stdc++.h>
using namespace std; // cons-overloading

class Complex
{
    int RP, IP;

public:
    Complex() // Cons-1   //default
    {
        RP = 0;
        IP = 0;
    }

    Complex(int x) // Cons-2    //with one argument
    {
        RP = x;
        IP = 0;
    }

    Complex(int x, int y) // Cons-3 //wuth 2 argument.
    {
        RP = x;
        IP = y;
    }

    void printComplex()
    {
        cout << "Complex number is " << RP << " + " << IP << "i" << endl;
    }
};

int main()
{
    Complex c1; // cons-1 will be use.
    c1.printComplex();

    Complex c2(5); // cons-2 will be use.
    c2.printComplex();

    Complex c3(6, 7); // cons-3 will be use.
    c3.printComplex();
}
