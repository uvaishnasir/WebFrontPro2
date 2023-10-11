#include <bits/stdc++.h>
using namespace std; // THIS keyword
class A
{
    int a;

public:
    A setData(int a)
    {
        this->a = a; //"this" is a keyword which is a pointer which points to the object which invokes the member function.
        return *this;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(7).getData(); // setData returns an object.(i.e a)
    a.getData();
}