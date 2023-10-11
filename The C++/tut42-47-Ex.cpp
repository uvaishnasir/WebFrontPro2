#include <bits/stdc++.h>
#include <cmath>
using namespace std;
/*
    Create 2 classes.
       1. SimpleCalculator- Takes input of 2 members using a utility function and perform +, -, *, / operation and displays the result using another function.

       2. ScientificCalculator- Takes input of 2 members using a utility function and perform any four scientific operation of your choice and displays the result using another function.

    Create another class HybridCalculator and inherit it using above 2 class:
    Q1. Which type of Inheritance are you using ?    //Multiple inheritance.
    Q2. Which mode of Inheritance are you using ?    //Public.
    Q3. Create an object of HybridCalculator class and display results of operations of this class.

*/

class SimpleCalculator
{
protected:
    int opr1, opr2;

public:
    void getTwoOperand()
    {
        cout << "Enter two integer Operands for SimpleCalculator\n";
        cin >> opr1 >> opr2;
    }
    int OprAdd()
    {
        return (opr1 + opr2);
    }
    int OprSub()
    {
        return (opr1 - opr2);
    }
    int OprMul()
    {
        return (opr1 * opr2);
    }
    float OprDiv()
    {
        return (opr1 / opr2);
    }
    int OprMod()
    {
        return (opr1 % opr2);
    }
};

class ScientificCalculator
{
protected:
    float opr1;

public:
    void getAnOperand()
    {
        cout << "Enter one operand for ScientificCalculator\n";
        cin >> opr1;
    }
    float Exp2()
    {
        return exp2f(opr1); // 2 raised to the power opr1.
    }
    float Exp()
    {

        return expf(opr1); // e raised to the power opr1.
    }
    float logBase2()
    {

        return log2f(opr1);
    }
    float logBase10()
    {

        return log10f(opr1);
    }
};

class Hybrid : public SimpleCalculator, public ScientificCalculator
{

public:
    void displaySimpleCal()
    {
        cout << "\n***Your two Operands for SimpleCalculator are " << SimpleCalculator::opr1 << " & " << opr2 << endl;
        cout << "Results of 5 Simple operations:\n";
        cout << "Addition result: " << OprAdd() << endl;
        cout << "Subtraction result: " << OprSub() << endl;
        cout << "Multiplication result: " << OprMul() << endl;
        cout << "Divide result: " << OprDiv() << endl;
        cout << "Modulo(Remainder) result: " << OprMod() << endl;
    }
    void displayScientificCal()
    {
        cout << "\n***Your Operand for ScientificCalculator Class is " << ScientificCalculator::opr1 << endl; // Ambuiguity Resolution.
        cout << "Results of 4 Scientific operations:\n";
        cout << "e raised to the power is " << Exp() << endl;
        cout << "2 raised to the power is " << Exp2() << endl;
        cout << "Log base2 value is " << logBase2() << endl;
        cout << "Log base10 value is " << logBase10() << endl;
    }
};

int main()
{
    Hybrid h1, h2;
    h1.getTwoOperand();
    h1.displaySimpleCal();
    h2.getAnOperand();
    h2.displayScientificCal();
}