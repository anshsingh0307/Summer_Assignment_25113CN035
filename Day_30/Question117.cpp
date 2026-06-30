// Write a program to Create student record system using arrays and strings.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rollNo[20], marks[20];
    string name[20];
    int n = 0, choice;

    do
    {
        cout << "****** Student Record System *******";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Roll Number: ";
            cin >> rollNo[n];

            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name[n]);

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            cout << "Student Record Added Successfully!\n";
        }

        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Records Found!\n";
            }
            else
            {
                cout << "\n--- Student Records ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "\nRoll No : " << rollNo[i];
                    cout << "\nName    : " << name[i];
                    cout << "\nMarks   : " << marks[i];
                    cout << "\n------------------------";
                }
            }
        }

        else if (choice == 3)
        {
            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++)
            {
                if (rollNo[i] == searchRoll)
                {
                    cout << "\nStudent Found!";
                    cout << "\nRoll No : " << rollNo[i];
                    cout << "\nName    : " << name[i];
                    cout << "\nMarks   : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";
        }

        else if (choice == 4)
        {
            int updateRoll;
            bool found = false;

            cout << "Enter Roll Number: ";
            cin >> updateRoll;

            for (int i = 0; i < n; i++)
            {
                if (rollNo[i] == updateRoll)
                {
                    cout << "Enter New Marks: ";
                    cin >> marks[i];
                    cout << "Marks Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";
        }

        else if (choice == 5)
        {
            cout << "Thank You!\n";
        }

        else
        {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}