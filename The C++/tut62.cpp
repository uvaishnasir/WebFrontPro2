#include <bits/stdc++.h>
using namespace std; // Opening files using member funcion.

int main()
{
    ofstream out;
    out.open("tut60.txt");
    out << "This is writing.\n";
    out << "This text is adding.\n";
    out << "This text is also add to the file.\n";
    out.close();
    ifstream in;
    in.open("tut60.txt");
    string s, s2;
    // in >> s; //It will read only one word. For a line use getline.

    // getline(in, s);
    // getline(in, s2);
    // cout << s << s2;

    while (in.eof() == 0) // Reading line by line.
    {
        getline(in, s);
        cout << s << endl;
    }

    in.close();
}