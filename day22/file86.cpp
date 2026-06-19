// Write a program to Count words in a  sentence.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int words = 0;

    for (int i = 0; i < str.length(); i++) {
        if (i == 0 && str[i] != ' ')
            words++;
        else if (str[i] != ' ' && str[i - 1] == ' ')
            words++;
    }

    cout << "Number of words = " << words;

    return 0;
}