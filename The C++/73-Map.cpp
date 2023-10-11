#include <bits/stdc++.h>
using namespace std;

// Map is an associative array.

int main()
{
    map<string, int> marksMap;
    marksMap["Uv"] = 92;
    marksMap["JACK"] = 90;
    marksMap["BOB"] = 91;
    marksMap.insert({{"HARRY", 92}, {"JACKSON", 92}});
    map<string, int>::iterator it;
    for (it = marksMap.begin(); it != marksMap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}