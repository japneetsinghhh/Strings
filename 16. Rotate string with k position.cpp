#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void rotatestring(string s1, int k)
{
    if (s1.length() < k)
        cout << "-1";
    string rightrotate = s1.substr(k)+s1.substr(0,k);
    string leftrotate = rightrotate;

    reverse(leftrotate.begin(), leftrotate.end());
    cout << rightrotate << endl;
    cout << leftrotate;
}

int main(void)
{
    string s1 = "programming";
    int k=6;
    rotatestring(s1, k);
}
