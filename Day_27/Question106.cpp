// Write a program to Create employee management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    int empId;
    string name, department;
    float salary;

    do
    {
        cout << " ********** Employee Management System ************ " << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employee" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Employee ID: ";
            cin >> empId;

            cout << "Enter Employee Name: ";
            cin >> name;

            cout << "Enter Department: ";
            cin >> department;

            cout << "Enter Salary: ";
            cin >> salary;

            cout << "Employee record added successfully!" << endl;
        }
        else if (choice == 2)
        {
            cout << "----- Employee Details -----" << endl;
            cout << "Employee ID: " << empId << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Salary: Rs. " << salary << endl;
        }
        else if (choice == 3)
        {
            cout << "Thank you! Exiting..." << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}