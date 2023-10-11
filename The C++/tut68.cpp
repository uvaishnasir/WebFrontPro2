#include <bits/stdc++.h>
using namespace std;

template <class T>
class UV
{
public:
    T data;
    UV(T a)
    {
        data = a;
    }
    void display();
};

template <class T> //       //Mendatory for display() definition.
void UV<T>::display()
{
    cout << data << endl;
}

void func1(int a)
{
    cout << "I am 1st func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatized func() " << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am templatized func() " << a << endl;
}

int main()
{
    // UV<float> u(0.007);
    // UV<char> u('V');
    // cout << u.data << endl;
    // u.display();

    func1(7); // Exact match takes the highest priority.
    func(9);
}