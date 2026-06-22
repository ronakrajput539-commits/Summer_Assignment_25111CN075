//Write a program to Find common characters in strings.
#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "Common characters: ";

    for (int i = 0; str1[i] != '\0'; i++) {
        bool found = false;

        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

      
        bool duplicate = false;
        for (int k = 0; k < i; k++) {
            if (str1[k] == str1[i]) {
                duplicate = true;
                break;
            }
        }

        if (found && !duplicate) {
            cout << str1[i] << " ";
        }
    }

    return 0;
}