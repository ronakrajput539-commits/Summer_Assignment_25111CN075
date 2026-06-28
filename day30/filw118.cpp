//Write a program to Create mini library system.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int bookID[SIZE];
    string title[SIZE];
    string author[SIZE];

    int n = 0, choice, id;
    bool found;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Update Book";
        cout << "\n5. Delete Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (n < SIZE)
            {
                cout << "\nEnter Book ID: ";
                cin >> bookID[n];

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                n++;

                cout << "Book Added Successfully!\n";
            }
            else
            {
                cout << "Library is Full!\n";
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Books Available!\n";
            }
            else
            {
                cout << "\n------ Book List ------\n";

                for (int i = 0; i < n; i++)
                {
                    cout << "\nBook ID : " << bookID[i];
                    cout << "\nTitle   : " << title[i];
                    cout << "\nAuthor  : " << author[i];
                    cout << "\n--------------------------";
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (bookID[i] == id)
                {
                    cout << "\nBook Found!";
                    cout << "\nBook ID : " << bookID[i];
                    cout << "\nTitle   : " << title[i];
                    cout << "\nAuthor  : " << author[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;

        case 4:
            cout << "Enter Book ID to Update: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (bookID[i] == id)
                {
                    cin.ignore();

                    cout << "Enter New Title: ";
                    getline(cin, title[i]);

                    cout << "Enter New Author: ";
                    getline(cin, author[i]);

                    cout << "Book Updated Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;

        case 5:
            cout << "Enter Book ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (bookID[i] == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        bookID[j] = bookID[j + 1];
                        title[j] = title[j + 1];
                        author[j] = author[j + 1];
                    }

                    n--;

                    cout << "Book Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}