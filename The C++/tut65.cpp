#include <bits/stdc++.h>
using namespace std;

// Template with multiple parameters.(ONE, TWO OR MORE THAN TWO)
/*
template<class T1, class T2>
class nameOfclass
{
    //class body
};
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
    }
};

int main()
{
    myClass<int, char> obj(1, 'U');
    obj.display();

    myClass<float, char> obj2(7.86, 'V');
    obj2.display();
}
