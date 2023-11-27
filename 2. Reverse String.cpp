#include <iostream>
#include <cstring>
#include <string>
#include <algorithm> //<bits/stdc++.h> will import all the library of C++
using namespace std;

void reversestring(char s1[], int len)
{
    cout << "With Loop - ";
    while (len--){
            cout << s1[len];
    }
    cout << endl;
}

int main()
{
    char s1[] = "Welcome To C Programming";
    int len = strlen(s1);
    reversestring(s1, len);

    string s2 = s1;
    reverse(s2.begin(), s2.end());
    cout << "With Reverse - " << s2 << endl;

    strrev(s1);     // reversing String with c style
    cout << "With strrev - " << s1;
}
