#include <bits/stdc++.h>
using namespace std;

class ShopItem
{
    int ID;
    float price;

public:
    void setData(int I, float p)
    {
        ID = I;
        price = p;
    }
    void getData()
    {
        cout << "Item IDcode: " << ID << endl;
        cout << "Item price: " << price << endl;
    }
};

int main()
{
    int size, id;
    float pr;
    cout << "Enter the size of array of Objects\n";
    cin >> size;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTmp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the ID & price of Item no " << i + 1 << endl;
        cin >> id >> pr;
        // (*ptr).setData(id, pr);
        ptr->setData(id, pr); // you can also use this.
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "\nItem number " << i + 1 << endl;
        ptrTmp->getData();
        ptrTmp++;
    }
}