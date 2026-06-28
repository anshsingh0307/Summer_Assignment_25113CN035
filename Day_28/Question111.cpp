// Write a program to Create ticket booking system.

#include <iostream>
using namespace std;

int main()
{
    int totalSeats = 10;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        cout << "----- Ticket Booking System -----";
        cout << "\n1. Book Ticket";
        cout << "\n2. Check Available Seats";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter number of tickets to book: ";
            cin >> seats;

            if (seats <= (totalSeats - bookedSeats))
            {
                bookedSeats += seats;
                cout << "Ticket Booked Successfully!\n";
            }
            else
            {
                cout << "Not enough seats available!\n";
            }
        }
        else if (choice == 2)
        {
            cout << "Available Seats: " << totalSeats - bookedSeats << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter number of tickets to cancel: ";
            cin >> seats;

            if (seats <= bookedSeats)
            {
                bookedSeats -= seats;
                cout << "Ticket Cancelled Successfully!\n";
            }
            else
            {
                cout << "Invalid number of tickets!\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Thank You!\n";
        }
        else
        {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}