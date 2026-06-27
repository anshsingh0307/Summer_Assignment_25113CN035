// Write a program to Create student record management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    int rollNo;
    string name;
    float marks;

    do
    {
        cout << "********* Student Record Management *********" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Roll Number: ";
            cin >> rollNo;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Marks: ";
            cin >> marks;

            cout << "Record added successfully!" << endl;
        }
        else if (choice == 2)
        {
            cout << "----- Student Record -----" << endl;
            cout << "Roll Number: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
        else if (choice == 3)
        {
            cout << "Exiting Program..." << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}