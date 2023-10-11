#include <iostream>
#include <string>
using namespace std;

// C++--> initially called- C with classes  by stroustroup.
// classes--> extension of structures.(structures + more)
// classes--> can have methods and properties.
// classes --> can make few members as private and few as public.

class Binary
{
private:
    string s; // by default class members are private.
    void checkBin();

public:
    void readBin();
    void ones_comp();
    void displayBin();
} b1; // you can also create object here.

// definition of methods.
void Binary::readBin()
{
    cout << "Enter the binary number\n";
    cin >> s;
}
void Binary::displayBin()
{
    cout << "Your Binary number is\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void Binary::checkBin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format. Please input the right format\n";
            exit(0);
        }
    }
}
void Binary::ones_comp()
{
    checkBin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            s.at(i) = '0';
        else
            s.at(i) = '1';
    }
    cout << "Now Binary number is converted into one's complement.\n";
}

int main()
{
    // Binary b1; //creating the object.
    // Nesting of member functions.
    b1.readBin();
    // b1.checkBin();   //Now it's a private method. you can't call directly from outside.
    b1.ones_comp();
    b1.displayBin();

    return 0;
}
