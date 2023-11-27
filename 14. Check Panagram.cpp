#include <iostream>
#include <string>
using namespace std;

bool panagram(string s)
{
    bool check[26] ={0};
    for (char c : s){
            check [c - 97] = 1;
    }

    for (bool seen : check){
        if (!seen){
            return false;
        }
    }
    return true;
}

int main(void)
{
    //string s = "we promptly judged antique ivory buckles for the next prize";
    string s = "quick brown fox jumps over the lazy dog";
    if(panagram(s))
        cout << "Panagram";
    else
        cout << "Not Panagram";
}
