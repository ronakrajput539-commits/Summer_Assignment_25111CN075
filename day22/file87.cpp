// Write a program to Character frequency.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to find frequency: ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "Frequency of '" << ch << "' = " << count;

    return 0;
}