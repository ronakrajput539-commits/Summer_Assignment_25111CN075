//Write a program to Create bank account system
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

struct Account {
    int accNo;
    string name;
    float balance;
};


template <typename T>
T readNumber(const string& prompt) {
    T value;
    cout << prompt;
    while (!(cin >> value)) {
        cin.clear();                                          
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        cout << "Invalid input. Please enter a number: ";
    }
    return value;
}

int main() {
    vector<Account> bank;
    int choice;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Exit\n";

        choice = readNumber<int>("Enter Choice: ");

        switch (choice) {

        case 1: {
            Account a;

            a.accNo = readNumber<int>("Enter Account Number: ");

            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, a.name);

            a.balance = readNumber<float>("Enter Initial Balance: ");

            bank.push_back(a);

            cout << "Account Created Successfully!\n";
            break;
        }

        case 2: {
            if (bank.empty()) {
                cout << "No Accounts Available!\n";
            } else {
                cout << "\n--- Account Details ---\n";

                for (size_t i = 0; i < bank.size(); i++) {
                    cout << "\nAccount No : " << bank[i].accNo;
                    cout << "\nName       : " << bank[i].name;
                    cout << "\nBalance    : " << bank[i].balance;
                    cout << "\n-----------------------\n";
                }
            }
            break;
        }

        case 3: {
            int acc = readNumber<int>("Enter Account Number: ");
            bool found = false;

            for (size_t i = 0; i < bank.size(); i++) {
                if (bank[i].accNo == acc) {
                    float amount = readNumber<float>("Enter Deposit Amount: ");

                    if (amount <= 0) {
                        cout << "Deposit amount must be positive!\n";
                    } else {
                        bank[i].balance += amount;
                        cout << "Deposit Successful!\n";
                        cout << "New Balance: " << bank[i].balance << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account Not Found!\n";

            break;
        }

        case 4: {
            int acc = readNumber<int>("Enter Account Number: ");
            bool found = false;

            for (size_t i = 0; i < bank.size(); i++) {
                if (bank[i].accNo == acc) {
                    float amount = readNumber<float>("Enter Withdrawal Amount: ");

                    if (amount <= 0) {
                        cout << "Withdrawal amount must be positive!\n";
                    } else if (amount <= bank[i].balance) {
                        bank[i].balance -= amount;

                        cout << "Withdrawal Successful!\n";
                        cout << "Remaining Balance: "
                             << bank[i].balance << endl;
                    } else {
                        cout << "Insufficient Balance!\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account Not Found!\n";

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