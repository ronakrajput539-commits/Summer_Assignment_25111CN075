//Write a program to Write function for perfect number
#include <iostream>
using namespace std;


bool isPerfect(int n) {
    int sum = 0;

    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPerfect(n))
        cout << n << " is a Perfect Number";
    else
        cout << n << " is NOT a Perfect Number";

    return 0;
}