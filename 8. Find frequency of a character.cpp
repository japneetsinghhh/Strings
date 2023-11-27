#include <iostream>
#include <string>
using namespace std;

int freq(string str, char ch)
{
    int c = 0;
    for (int i = 0; i < str.length(); i++) {
        if (ch == str[i])
            c++;
    }
    return c;
}

int main(void)
{
    string str = "C++ Programming";
    char ch = 'P';
    cout << "Frequency of " << ch << " is - " << freq(str, ch) << endl;
}
