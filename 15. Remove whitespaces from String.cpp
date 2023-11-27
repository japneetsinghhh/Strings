#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string removesapce(string s1)
{
    string res;
    for (char s : s1){
        if(!isspace(s)){
            res+=s;
        }
    }
    return res;
}

int main(void)
{
    string s1 = "Welcome to c++ programming";
    string res = removesapce(s1);
    cout << res;
}
