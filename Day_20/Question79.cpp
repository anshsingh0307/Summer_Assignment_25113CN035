// Write a program to Find row-wise sum. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Row-wise sums:\n";

    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }
    return 0;
}