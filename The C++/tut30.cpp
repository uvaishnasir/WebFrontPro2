#include <bits/stdc++.h>
using namespace std;

// class Complex
// {
//     int RP, IP;

// public:
//     Complex(int ,int); // Parameterzied constructor.

//     void printComplex()
//     {
//         cout << "Complex number is " << RP << " + " << IP << "i" << endl;
//     }
// };

// Complex::Complex(int x, int y) // It's parametric constructor as it accepts two parameter.
// {
//     RP = x;
//     IP = y;
// }

// 2nd program
class Point
{
    int x, y;

public:
    Point(int a, int b) // define cons inside the class.
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    friend float Dist(Point, Point);
};

// create a function which accept 2 point objects & compute the dist. b/w them.
// Hint-friend function.
float Dist(Point o1, Point o2)
{
    return sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
}

int main()
{
    // // Implicit call.
    // Complex c1(4, 5);
    // c1.printComplex();

    // // Explicit call.
    // Complex c2 = Complex(6, 7);
    // c2.printComplex();

    Point p1(4, 6);
    p1.displayPoint();

    Point p2(8, 8);
    p2.displayPoint();

    float dist = Dist(p1, p2);
    cout << "The distance between these two points is " << dist << endl;
}
