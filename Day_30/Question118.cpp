// Write a program to Create mini library system.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int bookId[20];
    string bookName[20];
    bool issued[20];

    int n = 0, choice;

    do {
        cout << "****** Mini Library System *******";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Book ID: ";
            cin >> bookId[n];

            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, bookName[n]);

            issued[n] = false;
            n++;

            cout << "Book Added Successfully!\n";
        }

        else if (choice == 2) {
            if (n == 0) {
                cout << "No Books Available!\n";
            } else {
                cout << "\n--- Book List ---\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nBook ID   : " << bookId[i];
                    cout << "\nBook Name : " << bookName[i];

                    if (issued[i])
                        cout << "\nStatus    : Issued";
                    else
                        cout << "\nStatus    : Available";

                    cout << "\n------------------------";
                }
            }
        }

        else if (choice == 3) {
            int id;
            bool found = false;

            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;

                    if (!issued[i]) {
                        issued[i] = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book is Already Issued!\n";
                    }

                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";
        }

        else if (choice == 4) {
            int id;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;

                    if (issued[i]) {
                        issued[i] = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book was not Issued!\n";
                    }

                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";
        }

        else if (choice == 5) {
            cout << "Thank You!\n";
        }

        else {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}