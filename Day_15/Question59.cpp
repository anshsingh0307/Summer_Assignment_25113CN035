// Write a program to Rotate array right. 

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[]{1,2,3,4,5};
    int size=sizeof(arr);
    int n ;
    cout << "Enter the number of positions to rotate : ";
    cin >> n ;
    n = n % size;


    reverse(arr, arr + size);
    reverse(arr, arr + n);
    reverse(arr + n, arr + size);

    cout << "Array after right rotation: ";

    for (int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}