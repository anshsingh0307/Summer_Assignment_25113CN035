// Write a program to Add matrices. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows,cols;
    cout << "Enter number of rows and columns: ";
    cin >>rows>>cols;

    int a[rows][cols] , b[rows][cols] , sum[rows][cols];

    cout << "Enter elements of first matrix: " << endl ;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >>a[i][j];
        }
    }

    cout << "Enter elements of second matrix: " << endl ;
    for(int i =0; i<rows; i++) {
        for(int j =0; j<cols; j++) {
            cin >> b[i][j];
        }
    }

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            sum[i][j] =a[i][j]+b[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for(int i =0; i < rows; i++) {
        for(int j=0; j<cols; j++) {
            cout <<sum[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}