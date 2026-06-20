//Write a program to Find first non-repeating character
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int i, j, count;

    for (i = 0; i < str.length(); i++) {
        count = 0;

        for (j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "First non-repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";

    return 0;
}
