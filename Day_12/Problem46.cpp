// Write a program to Write function for Armstrong.

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n) {
    int original = n;
    int count = 0;
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    while (n > 0) {
        int digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }
    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (armstrong(n))
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}