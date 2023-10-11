#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int RP, IP;

public:
    Complex(void); // Constructor declaration.
                   /*1-Constructors is a special member function with the SAME NAME as of the class.
                     2-They are used to initialize the object of its class.
                     3-They are automatically invoked whenever an object is created.
                     4-They should be declared in the public section of the class.
                     5-They cannot return values and do not have return types.
                     6-They can have default arguments.
                     7-We cannot refer to thier address.
                    */
    void printComplex()
    {
        cout << "Complex number is " << RP << " + " << IP << "i" << endl;
    }
};

Complex::Complex(void) // It's a default constructor as it accept no argument.
{
    RP = 0; // It's set the every object with these values of RP & IP.
    IP = 0;
    // cout << "I'm a constructor of the complex class\n";
}

int main()
{
    Complex c1, c2, c3;
    c1.printComplex();
    c2.printComplex();
    c3.printComplex();
}