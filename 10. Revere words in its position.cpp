#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string rev(string input)
{
    string s2;
    string res;
    stringstream new_string (input);
    while (new_string >> s2){
        reverse (s2.begin(), s2.end());
        res += s2 + " ";
    }
    return res;
}

int main(void)
{
    string input = "welcome to c++ programming & chitkara";
    cout << rev(input);
}
