// Write a program to Remove spaces from 
// string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }

    cout << "String without spaces: " << result;

    return 0;
}