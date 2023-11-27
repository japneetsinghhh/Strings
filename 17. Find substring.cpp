#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string str = "abc";
    int length = str.length();
    // Iterate through all possible starting positions
    for (int start = 0; start < length; start++) {
    // Iterate through all possible ending positions
        for (int end = start + 1; end <= length; end++) {
        // Extract and print the substring
            string substring = str.substr(start, end - start);
            cout << substring << endl;
        }
    }
}
