#include <bits/stdc++.h>
using namespace std;
/*
Syntax for initialization list in Constructor:
constructor (argument-list): initialization-section
{
    cons. body.
}
eg:
class Test{
    int a,b;
    public:
      Test(int i, int j): a(i), b(j)
      {cons. body.}
};
*/
class Test
{
    int b, a; // Here, order does matter

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(a * (i + j))
    // Test(int i, int j) : b(a + j), a(i + b)  //Displayed garbage values Because initialization order does matter.
    Test(int i, int j) : a(i + b), b(i + j) // display correct values. & order doesn't matter.
    {
        cout << "Cons.. executed\n";
        cout << "Value of a is " << a << "\nValue of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 4);
}