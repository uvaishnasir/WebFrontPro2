#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

class shop
{
    int itemID[50];
    int itemPrice[50];
    string itemName[50];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setData();
    void displayPrice();
};

void shop::setData()
{
    cout << "Enter the name of your item no " << counter + 1 << endl;
    cin >> itemName[counter];
    cout << "Enter the Item ID.\n";
    cin >> itemID[counter];
    cout << "Enter item Price.\n";
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice()
{
    cout << "***Displaying of your shop Data***\n";
    cout << setw(15) << "Item Name:" << setw(15) << "Item ID:" << setw(15) << "Item Price:" << endl;
    for (int i = 0; i < counter; i++)
        cout << setw(15) << itemName[i] << setw(15) << itemID[i] << setw(15) << itemPrice[i]<<endl;
}

int main()
{
    shop Kirana;
    Kirana.initCounter();
    int Items;
    cout << "Enter the number of items which you want to insert in your Kirana Store\n";
    cin >> Items;
    for (int i = 0; i < Items; i++)
        Kirana.setData();
    Kirana.displayPrice();
}
