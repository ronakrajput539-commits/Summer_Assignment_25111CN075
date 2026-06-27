//Write a program to Create ticket booking system.
#include <iostream>
#include<string>
#include <vector>
using namespace std;

struct Ticket {
    int ticketNo;
    string name;
    string destination;
};

int main() {
    vector<Ticket> bookings;
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Bookings\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Ticket t;

            cout << "Enter Ticket Number: ";
            cin >> t.ticketNo;

            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, t.name);

            cout << "Enter Destination: ";
            getline(cin, t.destination);

            bookings.push_back(t);

            cout << "Ticket Booked Successfully!\n";
            break;
        }

        case 2: {
            if (bookings.empty()) {
                cout << "No Bookings Available!\n";
            } else {
                cout << "\n--- Booking Details ---\n";

                for (int i = 0; i < bookings.size(); i++) {
                    cout << "\nTicket No   : " << bookings[i].ticketNo;
                    cout << "\nName        : " << bookings[i].name;
                    cout << "\nDestination : " << bookings[i].destination;
                    cout << "\n----------------------\n";
                }
            }
            break;
        }

        case 3: {
            int ticketNo;
            bool found = false;

            cout << "Enter Ticket Number: ";
            cin >> ticketNo;

            for (int i = 0; i < bookings.size(); i++) {
                if (bookings[i].ticketNo == ticketNo) {
                    cout << "\nTicket Found!\n";
                    cout << "Ticket No   : " << bookings[i].ticketNo;
                    cout << "\nName        : " << bookings[i].name;
                    cout << "\nDestination : " << bookings[i].destination
                         << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Ticket Not Found!\n";

            break;
        }

        case 4: {
            int ticketNo;
            bool found = false;

            cout << "Enter Ticket Number to Cancel: ";
            cin >> ticketNo;

            for (int i = 0; i < bookings.size(); i++) {
                if (bookings[i].ticketNo == ticketNo) {
                    bookings.erase(bookings.begin() + i);

                    cout << "Ticket Cancelled Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Ticket Not Found!\n";

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