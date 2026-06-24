//Write a program to Create salary management system.
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary, hra, da, grossSalary;
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary Details\n";
        cout << "2. Display All Salary Records\n";
        cout << "3. Search Employee Salary by ID\n";
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

                cout << "Enter Basic Salary: ";
                cin >> emp[n].basicSalary;

                emp[n].hra = 0.20 * emp[n].basicSalary; // 20% HRA
                emp[n].da = 0.10 * emp[n].basicSalary;  // 10% DA
                emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                n++;
                cout << "Salary Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0) {
                    cout << "No records found!\n";
                } else {
                    cout << "\nSalary Records:\n";
                    for(int i = 0; i < n; i++) {
                        cout << "\nID: " << emp[i].id;
                        cout << "\nName: " << emp[i].name;
                        cout << "\nBasic Salary: " << emp[i].basicSalary;
                        cout << "\nHRA: " << emp[i].hra;
                        cout << "\nDA: " << emp[i].da;
                        cout << "\nGross Salary: " << emp[i].grossSalary << endl;
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
                        cout << "\nEmployee Salary Details:\n";
                        cout << "ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Basic Salary: " << emp[i].basicSalary << endl;
                        cout << "HRA: " << emp[i].hra << endl;
                        cout << "DA: " << emp[i].da << endl;
                        cout << "Gross Salary: " << emp[i].grossSalary << endl;
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