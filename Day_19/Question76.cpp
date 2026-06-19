// Write a program to Find diagonal sum. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of square matrix: ";
    cin >> n;
    int a[n][n];
    int sum = 0;

    cout<< "Enter matrix elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >>a[i][j];
        }
    }

    for(int i= 0; i<n; i++) {
        sum+=a[i][i];
    }

    cout<<"Sum of diagonal elements = " << sum;
    return 0;
}