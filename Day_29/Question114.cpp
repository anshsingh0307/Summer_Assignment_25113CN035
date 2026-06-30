// Write a program to Create menu-driven array operations system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], n, choice, i, value, pos;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "********** Array Operations *********";
        cout << "\n1. Display Array";
        cout << "\n2. Search Element";
        cout << "\n3. Insert Element";
        cout << "\n4. Delete Element";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Array Elements: ";
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        else if (choice == 2)
        {
            cout << "Enter element to search: ";
            cin >> value;

            bool found = false;

            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Element not found!" << endl;
        }

        else if (choice == 3)
        {
            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter value: ";
            cin >> value;

            if (pos >= 0 && pos <= n)
            {
                for (i = n; i > pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos] = value;
                n++;

                cout << "Element inserted successfully!" << endl;
            }
            else
            {
                cout << "Invalid Position!" << endl;
            }
        }

        else if (choice == 4)
        {
            cout << "Enter position to delete: ";
            cin >> pos;

            if (pos >= 0 && pos < n)
            {
                for (i = pos; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                cout << "Element deleted successfully!" << endl;
            }
            else
            {
                cout << "Invalid Position!" << endl;
            }
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