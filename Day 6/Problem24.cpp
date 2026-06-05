//Write a program to Find x^n without pow(). 
#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter base x: ";
    cin >> x; 
    cout << "Enter exponent n: ";
    cin >> n;
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}