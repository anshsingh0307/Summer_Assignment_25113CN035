//Write a program to Create ATM simulation. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    float balance = 5000, amount;

    do
    {
        cout << "******** ATM MENU *********" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Current Balance: Rs. " << balance << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Please collect your cash." << endl;
            }
            else
            {
                cout << "Insufficient balance!" << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Thank you for using the ATM." << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}