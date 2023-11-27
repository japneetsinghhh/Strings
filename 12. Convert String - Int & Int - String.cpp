#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string str = "12345";
    int num = stoi(str);
    cout << "The integer value is: " << num << endl;

    int x = 44;
    string s = to_string(x);
    cout << "The String value is: " <<s;
}














//mannualy
#include <bits/stdc++.h>
#include <boost/lexical_cast.hpp>
using namespace std;
int main()
{
    //Int to String
    string number = "13";
    int i = 0;
    for (char c : number) {
        // Checking if the element is number
        if (c >= '0' && c <= '9') {
            i = i * 10 + (c - '0');
        }
    }
    cout << i;


   // String to Int
    float f_val = 10.5;
    int i_val = 17;
    // lexical_cast() converts a float into string
    string strf = boost::lexical_cast<string>(f_val);
    // lexical_cast() converts a int into string
    string stri = boost::lexical_cast<string>(i_val);
    cout << "The float value in string is : " << strf << endl;
    cout << "The int value in string is : " << stri << endl;

}