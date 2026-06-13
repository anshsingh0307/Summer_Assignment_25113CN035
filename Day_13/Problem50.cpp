// Write a program to Find sum and average of array. 

#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout << "Enter the size of the array : " ;
    cin >> n ;
    int arr[n] ;
    int sum = 0 ;
    int average ;
    cout << "Enter the elements of the array : ";
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    for(int i=0 ; i<n ;i++){
        sum=sum+arr[i];
    }

    cout << "The sum of the array elements is : " << sum << endl ;
    cout << "The average of the array elements is : " << (sum/n);
    return 0 ;
}