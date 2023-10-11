#include <bits/stdc++.h>
using namespace std; // File I/O.

int main()
{
    ofstream uvOut("tut60b.txt"); // connecting our file with uvOut stream.

    string name;
    cout << "Enter your name\n";
    cin >> name;

    uvOut << "My name is " + name; // Write a string to the file.
    uvOut.close();                 // closing the file.

    ifstream uvIn("tut60b.txt");
    string content;
    // uvIn >> content;
    getline(uvIn, content);
    cout << "Content of this file: " << content;
    uvIn.close();
}