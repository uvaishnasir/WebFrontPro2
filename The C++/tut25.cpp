#include <iostream>
#include <string>
using namespace std;

class complex
{
    int RP, IP;

public:
    void setRPIP(int a, int b)
    {
        RP = a;
        IP = b;
    }
    void setRPIPbySum(complex o1, complex o2)
    {
        RP = o1.RP + o2.RP;
        IP = o1.IP + o2.IP;
    }
    void printComplex()
    {
        cout << "Complex number is " << RP << " + " << IP << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3, c4;
    c1.setRPIP(2, 4);
    c1.printComplex();

    c2.setRPIP(4, 2);
    c2.printComplex();

    c3.setRPIPbySum(c1, c2);
    c3.printComplex();

    return 0;
}