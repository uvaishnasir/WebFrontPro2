#include <bits/stdc++.h>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};

/*  For visibility mode.
                         |Public derivation   |Private derivation   |Protected derivation
1. Public members        |Public              |Private              |Protected
2. Private members       |Not Inherited       |Not Inherited        |Not Inherited
3. Protected members     |Protected           |Private              |Protected

*/

class Derived : protected Base
{
    a = 7;
    // b = 0;
    c = 9;
};

int main()
{
    Base b;
    Derived d;

    // cout << b.a;              // Doesn't work, since a is protected.
}