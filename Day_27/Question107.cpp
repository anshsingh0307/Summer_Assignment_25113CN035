// Write a program to Create salary management system. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    int empId;
    string name;
    float basicSalary, bonus, deduction, netSalary;

    do
    {
        cout << "******* Salary Management System ******" << endl;
        cout << "1. Enter Employee Details" << endl;
        cout << "2. Display Salary Details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Employee ID: ";
            cin >> empId;

            cout << "Enter Employee Name: ";
            cin >> name;

            cout << "Enter Basic Salary: ";
            cin >> basicSalary;

            cout << "Enter Bonus: ";
            cin >> bonus;

            cout << "Enter Deduction: ";
            cin >> deduction;

            netSalary = basicSalary + bonus - deduction;

            cout << "Salary calculated successfully!" << endl;
        }
        else if (choice == 2)
        {
            cout << "----- Salary Details -----" << endl;
            cout << "Employee ID: " << empId << endl;
            cout << "Name: " << name << endl;
            cout << "Basic Salary: Rs. " << basicSalary << endl;
            cout << "Bonus: Rs. " << bonus << endl;
            cout << "Deduction: Rs. " << deduction << endl;
            cout << "Net Salary: Rs. " << netSalary << endl;
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