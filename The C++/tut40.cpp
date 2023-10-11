#include <bits/stdc++.h>
using namespace std; // Multilevel Inheritance.      08/02/2022

class Student // class A(Base class of Exam).
{
protected:
    int roll_num;

public:
    void setRoll_num(int);
    void getRoll_num();
};

void Student::setRoll_num(int r)
{
    roll_num = r;
}
void Student::getRoll_num()
{
    cout << "The Roll number is " << roll_num << endl;
}

class Exam : public Student // Class B(Derived class of Student & Base class of Result)
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks()
{
    cout << "The marks obtained in Maths = " << maths << endl;
    cout << "The marks obtained in Physics = " << physics << endl;
}

class Result : public Exam // Class C(Derived class of Exam)
{
    float percentage;

public:
    void display()
    {
        getRoll_num();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
/*
Note:
     If we are inheriting (B from A) & (C from B):  [A-->B-->C]
     1. A is the base class for B & B is the base class for C.
     2. A-->B-->C is called Inheritance path.
*/
int main()
{
    Result uv;
    uv.setRoll_num(130);
    uv.set_marks(92.0, 91.0);
    uv.display();
}