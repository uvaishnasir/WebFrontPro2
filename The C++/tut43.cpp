#include <bits/stdc++.h>
using namespace std;
// Ambiguity resolution.
class Base1
{
public:
    void greet()
    {
        cout << "How are you ?\n";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Aap Kaise Ho ?\n";
    }
};

class Derived : public Base1, public Base2
{
    int a = 7;

public:
    void greet()
    {
        Base2::greet(); // Greet will be use of class base2.
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello, Khushamdeed\n";
    }
};

class D : public B
{
    int a;

public:
    void say() // Derived D's new say() method will overwrite the base class B's say() method.
    {
        cout << "Hello, Nice to meet you\n";
    }
};

int main()
{
    // Ambiguity:1
    // Base1 b1;
    // Base2 b2;
    // b1.greet();
    // b2.greet();
    // Derived d;
    // d.greet();

    // Ambiguity:2
    B b;
    D d;
    b.say();
    d.say();
}