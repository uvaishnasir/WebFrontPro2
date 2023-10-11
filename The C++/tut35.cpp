#include <bits/stdc++.h>
using namespace std;

// int count = 0;   //Error---count is ambiguous.
class num
{
    int count = 0;

public:
    num() // Constructor.
    {
        count++;
        cout << "This is the time when constructor is invoked for object number " << count << endl;
    }
    ~num() // Destructor.
    {
        cout << "This is the time when my destructor is invoked for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We're inside the main function\n";
    cout << "Creating the 1st object n1\n";
    num n1;
    {
        cout << "Entering the block\n";
        cout << "Creating two more objects n2, n3\n";
        num n2, n3;
        cout << "Exiting the block\n";
    }
    cout << "Back to main function\n";
}