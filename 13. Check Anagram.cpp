#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*//Way1
int anagram(string s1, string s2)
{
    int flag = 0;
    if (s1.length() != s2.length())
        return flag;
    for (int i=0 ; i<s1.length() ; i++){
        flag=0;
        for (int j=0 ; j<s2.length() ; j++){
            if (s1[i]==s2[j])
            {
                flag=1;
                break;
            }
        }
        if (flag == 0) return flag;
    }
    return flag;
}
int main(void)
{
    string s1 = "listen";
    string s2 = "silent";

    if (anagram(s1,s2))
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
}*/




/*//Way2
string sortstring(string s)
{
    for (int i=0 ; i<s.length()-1 ; i++){
        for (int j=0 ; j<s.length()-1-i ; j++){
            if (s[j] > s[j+1]){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    return s;
}
int main(void)
{
    string s1 = "demo";   // demo gram ABC below night in_pockets
    string s2 = "mode";   // mode arm  CAB elbow thing coins_kept

    s1 = sortstring(s1);
    s2 = sortstring(s2);

    if (s1==s2)
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
}*/




/*//Way3
int main(void)
{
    string s1 = "below";
    string s2 = "elbow";

    sort (s1.begin(), s1.end());
    sort (s2.begin(), s2.end());

    if (s1==s2)
        cout << "Anagram";
    else
        cout << "Not Anagram";
}*/
