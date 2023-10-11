#include <iostream>
#include <string.h>
using namespace std;

class Animal // creating a class.
{
private:
    int passcode; // private variable can't be access directly.

public:
    string name;
    int legs = 2;
    int age = 61;
    void setpass(int);              // declaration of the method in a class.
    void setDATA(string, int, int); // declaration of the method in a class.
                                    // method can be define in the class or out the class.
    void printData()                // declaration with definition of the method in a class.
    {
        cout << "Class object: " << name << endl;
        cout << "Legs: " << legs << endl;
        cout << "Average Age: " << age << endl;
        cout << "Secret code: " << passcode << endl;
    }
};
void Animal::setpass(int n)   //::-->scope resolution operator.
{
    passcode = n; // private variable always set in the method.
}

void Animal::setDATA(string name1, int legs1, int age1)
{
    name = name1;
    legs = legs1;
    age = age1;
}

int main()
{
    Animal Mammalia; // creating object.
    Mammalia.legs = 2;
    Mammalia.age = 62;
    // Mammalia.passcode= 7;      // you can't access private variable direclty.
    Mammalia.name = "HOMOSAPIANS";
    Mammalia.setDATA("HUMANS", 2, 61); // This method change the data.
    Mammalia.setpass(7);
    Mammalia.printData();
}