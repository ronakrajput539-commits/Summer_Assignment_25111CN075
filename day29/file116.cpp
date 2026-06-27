//Write a program to Create inventory management system.
#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    int id, quantity;
    string name;
};

int main() {
    Item items[100];
    int n = 0, choice, searchId;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Item ID: ";
            cin >> items[n].id;

            cin.ignore();
            cout << "Enter Item Name: ";
            getline(cin, items[n].name);

            cout << "Enter Quantity: ";
            cin >> items[n].quantity;

            n++;
            cout << "Item Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No items available.\n";
            } else {
                cout << "\nInventory List:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nItem ID: " << items[i].id;
                    cout << "\nItem Name: " << items[i].name;
                    cout << "\nQuantity: " << items[i].quantity;
                    cout << "\n-------------------";
                }
            }
            break;

        case 3:
            cout << "Enter Item ID to search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++) {
                if (items[i].id == searchId) {
                    cout << "\nItem Found!";
                    cout << "\nID: " << items[i].id;
                    cout << "\nName: " << items[i].name;
                    cout << "\nQuantity: " << items[i].quantity;
                    break;
                }

                if (i == n - 1)
                    cout << "Item not found.\n";
            }
            break;

        case 4:
            cout << "Exiting System...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}