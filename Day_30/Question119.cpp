// Write a program to Create mini employee management system.

#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int count = 0;
    int choice;

    do
    {
        cout << " Employee Management System ";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[count].id;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, emp[count].name);

            cout << "Enter Department: ";
            getline(cin, emp[count].department);

            cout << "Enter Salary: ";
            cin >> emp[count].salary;

            count++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "No employee records found.\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < count; i++)
                {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID: " << emp[i].id << endl;
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Department: " << emp[i].department << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                }
            }
            break;

        case 3:
        {
            int searchId;
            bool found = false;

            cout << "Enter Employee ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++)
            {
                if (emp[i].id == searchId)
                {
                    cout << "\nEmployee Found:\n";
                    cout << "ID: " << emp[i].id << endl;
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Department: " << emp[i].department << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 4:
        {
            int deleteId;
            bool found = false;

            cout << "Enter Employee ID to Delete: ";
            cin >> deleteId;

            for (int i = 0; i < count; i++)
            {
                if (emp[i].id == deleteId)
                {
                    for (int j = i; j < count - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "Employee Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 5:
            cout << "Thank you for using Employee Management System!\n";
            break;

        default:
            cout << "Invalid Choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}