// Write a program to Move zeroes to end. 

#include <bits/stdc++.h>
using namespace std ;
int main() {
    int arr[] = {1,0,2,0,3, 0,4,5};
    int n = sizeof(arr) ;
    int j = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]!=0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
cout << "Array after moving zeroes to the end: ";

    for (int i=0; i<n; i++) {
        cout <<arr[i]<< " ";
    }
    return 0;
}