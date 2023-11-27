#include <iostream>
using namespace std;
int main(void)
{
    string s1 = "Hello";
    string s2 = "hello";

    cout << s1.compare(s2) << endl;

    if (s1 == s2){
        cout << "Equals";
    }
    else{
        cout << "Not equals";
    }
}
