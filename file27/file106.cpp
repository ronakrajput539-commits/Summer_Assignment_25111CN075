//Write a program to Create employee management system.
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[n].id;

                cin.ignore();
                cout << "Enter Employee Name: ";
                getline(cin, emp[n].name);

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0) {
                    cout << "No employee records found!\n";
                } else {
                    cout << "\nEmployee Records:\n";
                    for(int i = 0; i < n; i++) {
                        cout << "\nID: " << emp[i].id;
                        cout << "\nName: " << emp[i].name;
                        cout << "\nSalary: " << emp[i].salary << endl;
                    }
                }
                break;

            case 3: {
                int searchId;
                cout << "Enter Employee ID to Search: ";
                cin >> searchId;

                int i;
                for(i = 0; i < n; i++) {
                    if(emp[i].id == searchId) {
                        cout << "\nEmployee Found:\n";
                        cout << "ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Employee not found!\n";

                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}