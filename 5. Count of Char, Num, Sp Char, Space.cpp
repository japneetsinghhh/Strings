#include <iostream>
#include <cctype>
using namespace std;

int main ()
{
    string s;
    getline(cin, s);

    int c=0,n=0,sc=0,sp=0;
    int len = s.length();
    for (int i=0 ; i<len ; i++){
        char temp = s[i];
        if (isalpha(temp)){
            c++;
        }
        else if (isdigit(temp)){
            n++;
        }
        else if (ispunct(temp)){
            sc++;
        }
        else if (isspace(temp)){
            sp++;
        }
    }

    cout << "Count of Characters - " << c << " " << "\nCount of Numbers - " << n << " " << "\nCount of Special Characters - " << sc << " "<< "\nCount of Spaces - " << sp << endl;

    cout << "\nCharacter are - " << (c*100)/len << "%" << endl;
    cout << "Number are - " << (n*100)/len << "%" << endl;
    cout << "Special Character are - " << (sc*100)/len << "%" << endl;
    cout << "Space are - " << (sp*100)/len << "%" << endl;
}
