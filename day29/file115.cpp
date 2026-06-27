//Write a program to Create menu-driven string operations system
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice, i;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== String Operations Menu =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Count Vowels\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3: {
                string rev = "";
                for (i = str.length() - 1; i >= 0; i--) {
                    rev += str[i];
                }
                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 4: {
                string upper = str;
                for (i = 0; i < upper.length(); i++) {
                    if (upper[i] >= 'a' && upper[i] <= 'z')
                        upper[i] = upper[i] - 32;
                }
                cout << "Uppercase String: " << upper << endl;
                break;
            }

            case 5: {
                int count = 0;
                for (i = 0; i < str.length(); i++) {
                    char ch = str[i];
                    if (ch == 'a' || ch == 'e' || ch == 'i' ||
                        ch == 'o' || ch == 'u' || ch == 'A' ||
                        ch == 'E' || ch == 'I' || ch == 'O' ||
                        ch == 'U') {
                        count++;
                    }
                }
                cout << "Number of vowels = " << count << endl;
                break;
            }

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}