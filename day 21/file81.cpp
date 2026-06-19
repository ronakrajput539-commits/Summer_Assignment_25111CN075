//Write a program to Find string length without strlen()
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string = " << length;

    return 0;
}