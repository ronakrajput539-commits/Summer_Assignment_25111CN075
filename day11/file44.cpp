//Write a program to Write function to find factorial

#include<iostream>
using namespace std;



long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers";
    } 
    else {
        cout << "Factorial of " << n << " is " << factorial(n);
    }

    return 0;
}