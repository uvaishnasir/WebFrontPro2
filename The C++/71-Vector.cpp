#include <bits/stdc++.h>
using namespace std; //         // Vector in STL.

template <class T>
void display(vector<T> v) // You can pass vector with or without reference.
{
    cout << "Displaying Vector elements\n";
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}

int main()
{
    // Ways to Create the vector
    vector<int> vec;     // Zero length integer vector.
    vector<char> vec1;   // Zero length char vector.
    vec1.push_back('U'); // Push character from End in blank vec1.
    vec1.push_back('V');
    vec1.push_back('A');
    vec1.push_back('I');
    vec1.push_back('S');
    vec1.push_back('H');
    display(vec1);
    vector<char> vec2(6); // 6-Elements blank char vector.
    vec2.push_back('U');  // Add character after 6 blank space.
    vec2.push_back('V');
    vec2.push_back('A');
    vec2.push_back('I');
    vec2.push_back('S');
    vec2.push_back('H');
    display(vec2);
    vector<char> vec3(vec2); // Ditto Same char vector from vec2.
    display(vec3);
    vector<int> vec4(7, 0); // 7-Elements vector of Zeros.
    display(vec4);
    cout << "Size of vec1: " << vec1.size() << endl;
    cout << "Size of vec2: " << vec2.size() << endl;
    cout << "Size of vec3: " << vec3.size() << endl;
    cout << "Size of vec4: " << vec4.size() << endl;

    // int element, size;
    // cout << "Enter the size of your vector\n";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the element: " << i + 1 << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();     //Remove the last elements.
    // display(vec1);
    // vector<int>::iterator iter = vec1.end();
    // vec1.insert(iter, 5, 7); // This will insert the 5 copy of 7 in the position pointing to the iter.
    // display(vec1);
}