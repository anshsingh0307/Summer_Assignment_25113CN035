// Write a program to Create inventory management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int id[20], quantity[20];
    string name[20];
    int n = 0, choice;

    do
    {
        cout << "********* Inventory Management System ***********";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Quantity";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Product ID: ";
            cin >> id[n];

            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, name[n]);

            cout << "Enter Quantity: ";
            cin >> quantity[n];

            n++;
            cout << "Product Added Successfully!\n";
        }

        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Products Available!\n";
            }
            else
            {
                cout << "\n--- Product List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "ID: " << id[i]
                         << "\nName: " << name[i]
                         << "\nQuantity: " << quantity[i]
                         << "\n----------------------\n";
                }
            }
        }

        else if (choice == 3)
        {
            int searchId;
            bool found = false;

            cout << "Enter Product ID: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "\nProduct Found!\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found!\n";
        }

        else if (choice == 4)
        {
            int updateId;
            bool found = false;

            cout << "Enter Product ID: ";
            cin >> updateId;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == updateId)
                {
                    cout << "Enter New Quantity: ";
                    cin >> quantity[i];
                    cout << "Quantity Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found!\n";
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