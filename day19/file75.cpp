//Write a program to Transpose matrix.
#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[r][c];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Transpose Matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}