#include <bits/stdc++.h>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 4, int c = 5) // cons with default argument.
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData()
    {
        cout << "Data1 = " << data1 << "\nData2 = " << data2 << "\nData3 = " << data3 << endl;
    }
};

int main()
{
    simple s1(3);
    s1.printData();
}