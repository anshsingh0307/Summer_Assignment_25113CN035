// Write a program to Frequency of an element.

#include <iostream>
using namespace std;

int main() {
    int n, element, count = 0;

    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element whose frequency you want to find: ";
    cin >> element;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    cout << "Frequency of " << element << " is: " << count;

    return 0;
}