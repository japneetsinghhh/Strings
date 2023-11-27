#include <iostream>
#include <string>
using namespace std;

void freq(string str)
{
    int c = 0;
    bool visited[122] = {0};
    for (int i=0; i < str.length(); i++) {
        c = 0;
        char ch = str[i];
        if (str[i] == ' ')
            continue;
        if (visited[str[i]] == 1)
            continue;
        for (int j=0 ; j<str.length() ; j++)
        {
            if (str[i] == str[j])
                c++;
            visited[str[i]]= 1;
        }
        cout << "Frequency of " << str[i] << " = " << c << endl;
    }
}
int main(void)
{
    string str = "C++ Programming";
    freq(str);
}
