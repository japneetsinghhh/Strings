#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(void)
{
    string X;
    getline(cin, X);

    int len = X.length();

    //Code with Built-in functions
    for (int i=0 ; i<len ; i++)
    {
        char c = X[i];
        if (islower(c))
            X[i] = toupper(c);
        else if (isupper(c))
            X[i] = tolower(c);
    }
    cout << X;

    //Code with ASCII value
    for (int i=0 ; i<len ; i++)
    {
        char c = X[i];
        if (c>=65 && c<=90)
            X[i]+=32;
        else if (c>=97 && c<=122)
            X[i]-=32;
    }
    cout << X;
}
