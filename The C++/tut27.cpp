#include <bits/stdc++.h>
using namespace std;

// forwatd declaration.
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumOfRealPart(Complex, Complex);
    int sumOfImgPart(Complex, Complex);
};

class Complex
{
    int RP, IP;
    // Individually declaring functions as friends.
    // friend calculator::sumOfRealPart(Complex, Complex);
    // friend calculator::sumOfImgPart(Complex, Complex);

    // Aliter: Declaring the entire calculator class as a friend.
    friend class calculator;

public:
    void
    setRPIP(int a, int b)
    {
        RP = a;
        IP = b;
    }

    void printComplex()
    {
        cout << "Complex number is " << RP << " + " << IP << "i" << endl;
    }
};

int calculator::sumOfRealPart(Complex o1, Complex o2) // definition outside from class.
{
    return (o1.RP + o2.RP);
}
int calculator::sumOfImgPart(Complex o1, Complex o2) // definition outside from class.
{
    return (o1.IP + o2.IP);
}

int main()
{
    Complex c1, c2;
    c1.setRPIP(7, 3);
    c1.printComplex();

    c2.setRPIP(2, 7);
    c2.printComplex();

    calculator calr, calc;
    int res = calr.sumOfRealPart(c1, c2);
    cout << "Sum of RPs of C1 & C2 is " << res << endl;

    int res2 = calc.sumOfImgPart(c1, c2);
    cout << "Sum of IPs of C1 & C2 is " << res2 << endl;
}