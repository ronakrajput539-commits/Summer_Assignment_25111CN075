//Write a program to Sort words by length
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(),
         [](const string &a, const string &b) {
             return a.length() < b.length();
         });

    cout << "Words sorted by length:\n";
    for (const string &word : words) {
        cout << word << " ";
    }

    return 0;
}