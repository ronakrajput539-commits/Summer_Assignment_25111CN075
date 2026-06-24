//Write a program to Create marksheet generation system.
#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Roll Number: ";
    cin >> roll;

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Roll Number : " << roll << endl;
    cout << "Student Name: " << name << endl;

    cout << "\nSubject Marks:\n";
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Subject 4 : " << m4 << endl;
    cout << "Subject 5 : " << m5 << endl;

    cout << "\nTotal Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade : A+\n";
    else if (percentage >= 80)
        cout << "Grade : A\n";
    else if (percentage >= 70)
        cout << "Grade : B\n";
    else if (percentage >= 60)
        cout << "Grade : C\n";
    else if (percentage >= 40)
        cout << "Grade : D\n";
    else
        cout << "Grade : F (Fail)\n";

    return 0;
}