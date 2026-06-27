//Write a program to Create library management system.
#include <iostream>
#include<string>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    vector<Book> library;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Book b;
                cout << "Enter Book ID: ";
                cin >> b.id;
                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, b.title);

                cout << "Enter Author Name: ";
                getline(cin, b.author);

                library.push_back(b);
                cout << "Book Added Successfully!\n";
                break;
            }

            case 2: {
                if (library.empty()) {
                    cout << "No books available.\n";
                } else {
                    cout << "\nBook Records:\n";
                    for (int i = 0; i < library.size(); i++) {
                        cout << "ID: " << library[i].id
                             << "\nTitle: " << library[i].title
                             << "\nAuthor: " << library[i].author
                             << "\n-------------------\n";
                    }
                }
                break;
            }

            case 3: {
                int searchId;
                cout << "Enter Book ID to Search: ";
                cin >> searchId;

                int found = 0;
                for (int i = 0; i < library.size(); i++) {
                    if (library[i].id == searchId) {
                        cout << "\nBook Found!\n";
                        cout << "ID: " << library[i].id << endl;
                        cout << "Title: " << library[i].title << endl;
                        cout << "Author: " << library[i].author << endl;
                        found = 1;
                    }
                }

                if (found == 0)
                    cout << "Book not found.\n";

                break;
            }

            case 4: {
                int deleteId;
                cout << "Enter Book ID to Delete: ";
                cin >> deleteId;

                int found = 0;
                for (int i = 0; i < library.size(); i++) {
                    if (library[i].id == deleteId) {
                        library.erase(library.begin() + i);
                        cout << "Book Deleted Successfully!\n";
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    cout << "Book not found.\n";

                break;
            }

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}