//Write a program to Union of arrays.
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int uni[n1 + n2];
    int k = 0;

    
    for(int i = 0; i < n1; i++) {
        uni[k++] = arr1[i];
    }

    for(int i = 0; i < n2; i++) {
        bool found = false;

        for(int j = 0; j < k; j++) {
            if(arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            uni[k++] = arr2[i];
        }
    }

    cout << "Union Array: ";
    for(int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }

    return 0;
}