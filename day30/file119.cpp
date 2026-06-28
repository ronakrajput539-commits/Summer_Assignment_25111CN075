//Write a program to Create mini employee management system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int empID[SIZE];
    string empName[SIZE];
    string department[SIZE];
    float salary[SIZE];

    int n = 0, choice, id;
    bool found;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (n < SIZE)
            {
                cout << "\nEnter Employee ID: ";
                cin >> empID[n];

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee Added Successfully!\n";
            }
            else
            {
                cout << "Employee List is Full!\n";
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Employee Records Found!\n";
            }
            else
            {
                cout << "\n------ Employee List ------\n";

                for (int i = 0; i < n; i++)
                {
                    cout << "\nEmployee ID : " << empID[i];
                    cout << "\nName        : " << empName[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i];
                    cout << "\n----------------------------";
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (empID[i] == id)
                {
                    cout << "\nEmployee Found!";
                    cout << "\nEmployee ID : " << empID[i];
                    cout << "\nName        : " << empName[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;

        case 4:
            cout << "Enter Employee ID to Update: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (empID[i] == id)
                {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, empName[i]);

                    cout << "Enter New Department: ";
                    getline(cin, department[i]);

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Employee Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;

        case 5:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (empID[i] == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        empID[j] = empID[j + 1];
                        empName[j] = empName[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }

                    n--;
                    cout << "Employee Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

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