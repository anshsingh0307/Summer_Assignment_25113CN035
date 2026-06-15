// Write a program to Reverse array. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) ;
    int start = 0;
    int end = n-1;

    while (start<end) {
        int temp= arr[start];
        arr[start] =arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed array: ";

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}