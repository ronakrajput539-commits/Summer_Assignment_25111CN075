//Write a program to Remove duplicate characters.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
            result += str[i];
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}