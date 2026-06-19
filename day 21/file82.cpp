//Write a program to Reverse a string
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}