//Write a program to Convert binary to decimal.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int binary, decimal = 0, i = 0;
    cin >> binary;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        i++;
        binary /= 10;
    }

    cout << decimal;

    return 0;
}