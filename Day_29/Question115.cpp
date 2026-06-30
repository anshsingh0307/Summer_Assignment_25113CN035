// Write a program to Create menu-driven string operations system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do
    {
        cout << "******* String Operations *******";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Reverse String";
        cout << "\n4. Convert to Uppercase";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "String: " << str << endl;
        }

        else if (choice == 2)
        {
            cout << "Length = " << str.length() << endl;
        }

        else if (choice == 3)
        {
            cout << "Reversed String: ";
            for (int i = str.length() - 1; i >= 0; i--)
            {
                cout << str[i];
            }
            cout << endl;
        }

        else if (choice == 4)
        {
            string temp = str;

            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                {
                    temp[i] = temp[i] - 32;
                }
            }

            cout << "Uppercase String: " << temp << endl;
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