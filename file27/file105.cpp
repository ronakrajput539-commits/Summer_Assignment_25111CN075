//Write a program to Create student record management system.
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].roll;

                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, s[n].name);

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0) {
                    cout << "No records found!\n";
                } else {
                    cout << "\nStudent Records:\n";
                    for(int i = 0; i < n; i++) {
                        cout << "\nRoll Number: " << s[i].roll;
                        cout << "\nName: " << s[i].name;
                        cout << "\nMarks: " << s[i].marks << endl;
                    }
                }
                break;

            case 3: {
                int rollNo;
                cout << "Enter Roll Number to Search: ";
                cin >> rollNo;

                int i;
                for(i = 0; i < n; i++) {
                    if(s[i].roll == rollNo) {
                        cout << "\nRecord Found:\n";
                        cout << "Roll Number: " << s[i].roll << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Student not found!\n";

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