-#include <iostream>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S);

int main(void)
{
    string s1 = "racecar";
    string s2 = s1;

    reverse(s2.begin(), s2.end());

    if (s2 == s1){
            cout << "With Reverse Function - Palindrome" << endl;
    }
    else{
        cout << "With Reverse Function Not Palindrome" << endl;
    }

    cout << isPalindrome(s1);
}

string isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "Not Palindrome";
        }
    }
    return "Palindrome";
}
