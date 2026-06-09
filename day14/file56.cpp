//Write a program to Find duplicates in array
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    bool found = false;

    
    for (int i = 0; i < n; i++) {
        bool Duplicate = false;

      
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                Duplicate = true;
                break;
            }
        }

        if (Duplicate) continue;

        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 0) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No duplicates found";
    }

    return 0;
}