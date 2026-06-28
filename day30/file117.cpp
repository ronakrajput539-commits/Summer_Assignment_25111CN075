//Write a program to Create student record system using arrays and strings.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int roll[SIZE];
    string name[SIZE];
    float marks[SIZE];

    int n = 0, choice, r;
    bool found;

    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (n < SIZE)
            {
                cout << "\nEnter Roll Number: ";
                cin >> roll[n];

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student Record Added Successfully!\n";
            }
            else
            {
                cout << "Record List is Full!\n";
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Records Found!\n";
            }
            else
            {
                cout << "\nStudent Records\n";
                cout << "-------------------------------------\n";

                for (int i = 0; i < n; i++)
                {
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;
                    cout << "-----------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> r;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    cout << "\nRecord Found\n";
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;

        case 4:
            cout << "Enter Roll Number to Update: ";
            cin >> r;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;

        case 5:
            cout << "Enter Roll Number to Delete: ";
            cin >> r;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    n--;
                    found = true;
                    cout << "Record Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

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