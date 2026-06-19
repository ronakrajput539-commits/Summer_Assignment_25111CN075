//Write a program to Check palindrome string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            cout << "Not a Palindrome String";
            return 0;
        }
    }

    cout << "Palindrome String";

    return 0;
}