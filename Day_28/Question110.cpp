// Write a program to Create bank account system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int accountNo;
    string name;
    float balance = 0, amount;
    int choice;

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    do
    {
        cout << "----- Bank Account System -----";
        cout << "\n1. Deposit Money";
        cout << "\n2. Withdraw Money";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
        }
        else if (choice == 2)
        {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Amount Withdrawn Successfully!\n";
            }
            else
            {
                cout << "Insufficient Balance!\n";
            }
        }
        else if (choice == 3)
        {
            cout << "Account Number : " << accountNo;
            cout << "\nAccount Holder : " << name;
            cout << "\nCurrent Balance: Rs. " << balance << endl;
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