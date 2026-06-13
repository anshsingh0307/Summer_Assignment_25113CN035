// Write a program to Count even and odd elements. 

#include <iostream>
using namespace std ;

int main() {
    int countOdd = 0;
    int countEven = 0 ;

    int n ;
    cout << "Enter the size of the array : ";
    cin >> n ;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0)
        countEven++ ;

        else countOdd++ ;
    }

    cout << "The number of odd elements are : " << countOdd << endl ;
    cout << "The number of even elements are : " << countEven ;

    return 0 ;
}