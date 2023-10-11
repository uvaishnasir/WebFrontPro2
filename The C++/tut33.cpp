#include <bits/stdc++.h>
using namespace std;

class BankDeposit
{
    int principal, years;
    float intRate, returnvalue;

public:
    BankDeposit() // Blank cons. for helping to create the object
    {
        returnvalue = 0, intRate = 0, principal = 0, years = 0;
    }
    BankDeposit(int p, int y, float r); // r can be  like 0.14
    BankDeposit(int p, int y, int r);   // r can be  like 14%
    void show();
};
void BankDeposit::show()
{
    cout << endl
         << "Principal amount = " << principal
         << " Return value after " << years << " years is " << returnvalue << endl;
}

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p; 
    years = y;
    intRate = r;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intRate = float(r) / 100;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intRate);
    }
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the values of p, y & r\n";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the values of p, y & R\n";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();

    return 0;
}