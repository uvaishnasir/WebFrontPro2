#include <bits/stdc++.h>
using namespace std;

void display(list<int> lst)
{
    cout << "Displaying the list\n";
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}
int main()
{
    list<int> list1(5); // Empty list of size 5 zeros..
    list<int>::iterator it;
    it = list1.begin();
    *it++ = 45;
    *it++ = 12;
    *it++ = 66;
    *it++ = 34;
    *it++ = 50;
    // Removing elements from the list.
    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(66);

    // Sorting the list.
    // display(list1);
    // list1.sort();
    display(list1);

    list<int> list2; // List of zero length.
    list2.push_back(7);
    list2.push_back(6);
    list2.push_back(5);
    list2.push_back(4);
    list2.push_back(3);
    list2.push_back(2);
    list2.push_back(1);
    display(list2);
    cout << "Size of list2: " << list2.size() << endl;

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "After Merging list1:\n";
    display(list1);

    // Reversing the list.
    cout << "After Reversing list1:\n";
    list1.reverse();
    display(list1);
}