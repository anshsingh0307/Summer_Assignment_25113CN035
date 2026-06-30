// Write a program to Develop complete mini project using arrays, strings and functions.

#include <bits/stdc++.h>
using namespace std;

struct Member
{
    int id;
    string name;
    int age;
    string plan;
    float fee;
};

Member gym[100];
int total = 0;

void addMember()
{
    cout << "Enter Member ID: ";
    cin >> gym[total].id;

    cin.ignore();

    cout << "Enter Member Name: ";
    getline(cin, gym[total].name);

    cout << "Enter Age: ";
    cin >> gym[total].age;

    cin.ignore();

    cout << "Enter Membership Plan (Monthly/Quarterly/Yearly): ";
    getline(cin, gym[total].plan);

    cout << "Enter Membership Fee: ";
    cin >> gym[total].fee;

    total++;

    cout << "\nMember Added Successfully!\n";
}

void displayMembers()
{
    if (total == 0)
    {
        cout << "\nNo Members Found!\n";
        return;
    }

    cout << "\n========== Member Records ==========\n";

    for (int i = 0; i < total; i++)
    {
        cout << "\nMember " << i + 1 << endl;
        cout << "ID   : " << gym[i].id << endl;
        cout << "Name : " << gym[i].name << endl;
        cout << "Age  : " << gym[i].age << endl;
        cout << "Plan : " << gym[i].plan << endl;
        cout << "Fee  : " << gym[i].fee << endl;
    }
}

void searchMember()
{
    int id;
    bool found = false;

    cout << "\nEnter Member ID: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (gym[i].id == id)
        {
            cout << "\nMember Found!\n";
            cout << "ID   : " << gym[i].id << endl;
            cout << "Name : " << gym[i].name << endl;
            cout << "Age  : " << gym[i].age << endl;
            cout << "Plan : " << gym[i].plan << endl;
            cout << "Fee  : " << gym[i].fee << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nMember Not Found!\n";
}

void updateMember()
{
    int id;
    bool found = false;

    cout << "\nEnter Member ID to Update: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (gym[i].id == id)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, gym[i].name);

            cout << "Enter New Age: ";
            cin >> gym[i].age;

            cin.ignore();

            cout << "Enter New Membership Plan: ";
            getline(cin, gym[i].plan);

            cout << "Enter New Membership Fee: ";
            cin >> gym[i].fee;

            cout << "\nMember Details Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nMember Not Found!\n";
}

void deleteMember()
{
    int id;
    bool found = false;

    cout << "\nEnter Member ID to Delete: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (gym[i].id == id)
        {
            for (int j = i; j < total - 1; j++)
            {
                gym[j] = gym[j + 1];
            }

            total--;

            cout << "\nMember Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nMember Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== GYM MEMBERSHIP MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add New Member\n";
        cout << "2. Display All Members\n";
        cout << "3. Search Member\n";
        cout << "4. Update Member Details\n";
        cout << "5. Delete Member\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addMember();
            break;

        case 2:
            displayMembers();
            break;

        case 3:
            searchMember();
            break;

        case 4:
            updateMember();
            break;

        case 5:
            deleteMember();
            break;

        case 6:
            cout << "\nThank You for Using the System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}