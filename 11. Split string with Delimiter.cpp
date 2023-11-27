#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input = "apple,banana,cherry,grape";
    stringstream ss(input);
    char delimiter = ',';
    string token;
    while (getline(ss, token, delimiter)) {
        cout << "Token: " << token << endl;
    }
    return 0;
}
