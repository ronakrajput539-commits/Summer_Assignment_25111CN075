//Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i;
    int sum = 0, max, min;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== Array Operations Menu =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Maximum Element\n";
        cout << "4. Find Minimum Element\n";
        cout << "5. Search Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum = " << sum << endl;
                break;

            case 3:
                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;

            case 4:
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
                break;

            case 5: {
                int key;
                cout << "Enter element to search: ";
                cin >> key;

                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at position "
                             << i + 1 << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Element not found.\n";

                break;
            }

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}