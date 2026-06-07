//Write a program to Write function for armstrong
#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;

   
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

   
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number";
    else
        cout << n << " is NOT an Armstrong number";

    return 0;
}