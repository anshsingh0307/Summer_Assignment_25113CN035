// Write a program to Create library management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int id[20], qty[20];
    string name[20];
    int n = 0, choice;

    do
    {
        cout << "----- Library Management System -----";
        cout << "\n1. Add Book";
        cout << "\n2. Show Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Book ID: ";
            cin >> id[n];

            cout << "Enter Book Name: ";
            cin.ignore();
            getline(cin, name[n]);

            cout << "Enter Quantity: ";
            cin >> qty[n];

            n++;
            cout << "Book Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Books Available!\n";
            }
            else
            {
                cout << "Books in Library:\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "ID: " << id[i]
                         << "  Name: " << name[i]
                         << "  Quantity: " << qty[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int bookId;
            cout << "Enter Book ID to Issue: ";
            cin >> bookId;

            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (id[i] == bookId)
                {
                    found = true;
                    if (qty[i] > 0)
                    {
                        qty[i]--;
                        cout << "Book Issued Successfully!\n";
                    }
                    else
                    {
                        cout << "Book Not Available!\n";
                    }
                }
            }

            if (!found)
                cout << "Book ID Not Found!\n";
        }
        else if (choice == 4)
        {
            int bookId;
            cout << "Enter Book ID to Return: ";
            cin >> bookId;

            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (id[i] == bookId)
                {
                    qty[i]++;
                    found = true;
                    cout << "Book Returned Successfully!\n";
                }
            }

            if (!found)
                cout << "Book ID Not Found!\n";
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