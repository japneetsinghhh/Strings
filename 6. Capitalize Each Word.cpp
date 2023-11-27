#include <iostream>
using namespace std;

string capitalize(string str)
{
    for (int i = 0; i < str.length(); i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ')
		{
			str[i+1] = toupper(str[i+1]);
		}
	}
	return str;
}

int main ()
{
    string str = "welcome to c++ programming";
    cout << capitalize(str);
}








/*way2:
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s1 = "welCoMe to c++ proGramming";
    int len = s1.length();

    for (int i=0 ; i<len ; i++)
    {
        if (i==0 && (s1[i]>= 'a' && s1[i]<='z')){
            s1[i] = s1[i]-32 ;
        }
        else if(s1[i] == ' ' && (s1[i+1]>='a' && s1[i+1]<='z')){
            s1[i+1] = s1[i+1]-32;
            i++;
        }
        else if(s1[i]>='A' && s1[i]<='Z'){
            s1[i] = s1[i]+32;
        }
    }

    cout << s1;
}
*/