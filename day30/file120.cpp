//Write a program to Develop complete mini project using arrays, strings and functions.
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;

int roll[SIZE];
string name[SIZE];
float marks[SIZE];
int n = 0;

// Function Prototypes
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    do
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "\nThank You!\n"; break;
            default: cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}

// Add Student
void addStudent()
{
    if(n >= SIZE)
    {
        cout << "Record Full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> roll[n];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;

    cout << "Student Added Successfully!\n";
}

// Display Students
void displayStudents()
{
    if(n == 0)
    {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\n----- STUDENT RECORDS -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i];
        cout << "\n---------------------------";
    }
}

// Search Student
void searchStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> r;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student Not Found!\n";
}

// Update Student
void updateStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> r;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == r)
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

    if(!found)
        cout << "Student Not Found!\n";
}

// Delete Student
void deleteStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> r;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            for(int j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;

            cout << "Record Deleted Successfully!\n";

            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student Not Found!\n";
}