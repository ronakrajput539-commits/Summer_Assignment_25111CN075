//Write a program to Subtract matrices.
#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[r][c], B[r][c], Diff[r][c];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

  
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Difference of matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << Diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}