#include <bits/stdc++.h>
using namespace std; //         // File I/O in C++.   <fstream> header file for file I/O

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream -->derived from fstreambase
3. ofstream -->derived from fstreambase
In order to work with files in c++, you'll have to open it. Primarily, there are two ways to open a file:
1. Using the constructor.
2. Using the member function open() of the class.
*/

int main()
{
    // Opening files using constructor &writing to it.
    // string s = "C++ programming.";
    // ofstream out("tut60.txt"); // Write operation.
    // out << s;        //just like cout. write to a file. tut60.txt

    // Opening files using constructor & reading it.
    string s2;
    ifstream in("tut60b.txt"); // Read operation.
    in >> s2;                  // just like cin.
    getline(in, s2);
    cout << s2;
}