//Write a program to Create contact management system
#include <iostream>
#include<string>
#include <vector>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Contact c;

            cout << "Enter Contact ID: ";
            cin >> c.id;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, c.name);

            cout << "Enter Phone Number: ";
            getline(cin, c.phone);

            contacts.push_back(c);

            cout << "Contact Added Successfully!\n";
            break;
        }

        case 2: {
            if (contacts.empty()) {
                cout << "No Contacts Available!\n";
            } else {
                cout << "\n--- Contact List ---\n";

                for (int i = 0; i < contacts.size(); i++) {
                    cout << "\nID    : " << contacts[i].id;
                    cout << "\nName  : " << contacts[i].name;
                    cout << "\nPhone : " << contacts[i].phone;
                    cout << "\n--------------------\n";
                }
            }
            break;
        }

        case 3: {
            int searchId;
            bool found = false;

            cout << "Enter Contact ID: ";
            cin >> searchId;

            for (int i = 0; i < contacts.size(); i++) {
                if (contacts[i].id == searchId) {
                    cout << "\nContact Found!\n";
                    cout << "ID    : " << contacts[i].id;
                    cout << "\nName  : " << contacts[i].name;
                    cout << "\nPhone : " << contacts[i].phone << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        case 4: {
            int deleteId;
            bool found = false;

            cout << "Enter Contact ID to Delete: ";
            cin >> deleteId;

            for (int i = 0; i < contacts.size(); i++) {
                if (contacts[i].id == deleteId) {
                    contacts.erase(contacts.begin() + i);

                    cout << "Contact Deleted Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}