//Write a program to Check symmetric matrix.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int A[10][10];

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                cout << "Matrix is NOT Symmetric";
                return 0;   
            }
        }
    }

    cout << "Matrix is Symmetric";
    return 0;
}