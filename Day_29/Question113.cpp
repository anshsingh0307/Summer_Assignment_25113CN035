// Write a program to Create menu-driven calculator.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    float num1, num2;

    do
    {
        cout << "\n----- Menu Driven Calculator -----";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        if (choice == 1)
        {
            cout << "Result = " << num1 + num2 << endl;
        }
        else if (choice == 2)
        {
            cout << "Result = " << num1 - num2 << endl;
        }
        else if (choice == 3)
        {
            cout << "Result = " << num1 * num2 << endl;
        }
        else if (choice == 4)
        {
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Division by zero is not possible!" << endl;
        }
        else if (choice == 5)
        {
            cout << "Thank You!" << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}