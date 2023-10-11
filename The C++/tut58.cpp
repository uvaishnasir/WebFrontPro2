#include <bits/stdc++.h>
using namespace std; // Pure Virtual Function Example.

class CWH //         //Abstract Base Class.
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    void virtual display() = 0; // Do nothing function--> Pure Virtual Function
};

class CWHvideo : public CWH
{
    float videolen;

public:
    CWHvideo(string s, float r, float len) : CWH(s, r)
    {
        videolen = len;
    }
    void virtual display()
    {
        cout << "\nThis is an amazing video with title " << title << endl;
        cout << "Ratings " << rating << " Out of 5 stars\n";
        cout << "Length of this video is : " << videolen << " Minutes\n";
    }
};
class CWHtext : public CWH
{
    int wordCount;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        wordCount = wc;
    }
    void display()
    {
        cout << "\nThis is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " Out of 5 stars\n";
        cout << "No of words in this text tutorial is : " << wordCount << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For CWH videos.
    title = "CSS Tutorials";
    vlen = 18.55;
    rating = 4.99;
    CWHvideo CSSvideo(title, rating, vlen);
    CSSvideo.display();

    // For CWH videos.
    title = "HTML tutorial Text";
    words = 1034;
    rating = 4.95;
    CWHtext HTMLtext(title, rating, words);
    HTMLtext.display();

    CWH *tuts[2];
    tuts[0] = &CSSvideo; // pointing to CWHvideo class object.
    tuts[1] = &HTMLtext; // pointing to CWHtext class object.
    tuts[0]->display();
    tuts[1]->display();
}