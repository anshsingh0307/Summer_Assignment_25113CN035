// Write a program to Create marksheet generation system .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "************* Marksheet Generation System ************" << endl;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "********* Marksheet **********" << endl;
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;

    return 0;
}