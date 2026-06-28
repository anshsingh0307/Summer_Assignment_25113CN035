// Write a program to Create contact management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name[20], phone[20];
    int n = 0, choice;

    do
    {
        cout << "----- Contact Management System -----";
        cout << "\n1. Add Contact";
        cout << "\n2. Show Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name[n]);

            cout << "Enter Phone Number: ";
            getline(cin, phone[n]);

            n++;
            cout << "Contact Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Contacts Found!\n";
            }
            else
            {
                cout << "--- Contact List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Name : " << name[i] << endl;
                    cout << "Phone: " << phone[i] << endl;
                    cout << "----------------------\n";
                }
            }
        }
        else if (choice == 3)
        {
            string searchName;
            bool found = false;

            cin.ignore();
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            for (int i = 0; i < n; i++)
            {
                if (name[i] == searchName)
                {
                    cout << "Contact Found!\n";
                    cout << "Name : " << name[i] << endl;
                    cout << "Phone: " << phone[i] << endl;
                    found = true;
                }
            }

            if (!found)
            {
                cout << "Contact Not Found!\n";
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