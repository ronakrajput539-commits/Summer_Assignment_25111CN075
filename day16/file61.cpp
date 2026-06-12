//Write a program to Find missing number in array.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    int missing = totalSum - arraySum;

    cout << "Missing number = " << missing << endl;

    return 0;
}