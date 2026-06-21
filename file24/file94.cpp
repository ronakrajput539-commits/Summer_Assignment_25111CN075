//Write a program to Compress a string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << compressed;

    return 0;
}