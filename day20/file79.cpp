//Write a program to Find row-wise sum.
#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Row-wise sum:\n";

    for (int i = 0; i < r; i++) {
        int sum = 0;   
        for (int j = 0; j < c; j++) {
            sum += A[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << sum << endl;
    }

    return 0;
}