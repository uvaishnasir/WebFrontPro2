#include <bits/stdc++.h>
using namespace std; // Virtual Base class.

// Student-->test,sports    //done
// Test,Sports-->result.     //done

class Student
{
protected:
    long long int rollNo;

public:
    void setRoll(long long int r)
    {
        rollNo = r;
    }
    void printRoll()
    {
        cout << "Your roll number is " << rollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void printMarks()
    {
        cout << "The results is here:" << endl
             << "Maths = " << maths << endl
             << "Physics = " << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void displayData()
    {
        total = maths + physics + score;
        printRoll();
        printMarks();
        printScore();
        cout << "Your total score is: " << total << " & percentage is "
             << (maths + physics + score) / 210 << "%" << endl;
    }
};

int main()
{
    Result uv;
    uv.setRoll(2001430100130);
    uv.setMarks(75, 91);
    uv.setScore(8.5);
    uv.displayData();
}