// Write a program to Find LCM of two numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxNumber = max(a, b);

    while(true) {
        if(maxNumber % a == 0 && maxNumber % b == 0) {
            cout << "LCM = " << maxNumber;
            break;
        }
        maxNumber++;
    }

    return 0;
}