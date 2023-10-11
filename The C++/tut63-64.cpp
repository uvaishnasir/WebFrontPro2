#include <bits/stdc++.h>
using namespace std; //           //Templates in C++

// class Vector         //simple class
// {
// public:
//     int *arr;
//     int size;

//     Vector(int sz)
//     {
//         size = sz;
//         arr = new int[size];
//     }
//     int dotProduct(Vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

template <class T> // T can be any data types.      //Template syntax.
class Vector
{
public:
    T *arr;
    int size;

    Vector(int sz)
    {
        size = sz;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 5; // You cannot use float values it will show wrong results
    // v1.arr[1] = 6; // So templates is the solution in which by making template you can use any data types.
    // v1.arr[2] = 4;

    // Vector v2(3);
    // v2.arr[0] = 0;
    // v2.arr[1] = 1;
    // v2.arr[2] = 2;

    // int d = v1.dotProduct(v2);
    // cout << d << endl;

    Vector<float> v1(3); // This is the power of template.
    v1.arr[0] = 1.5;
    v1.arr[1] = 1.2;
    v1.arr[2] = 4.5;

    Vector<float> v2(3);
    v2.arr[0] = 1.5;
    v2.arr[1] = 1.2;
    v2.arr[2] = 0;
    float d = v1.dotProduct(v2);
    cout << d << endl;
}