// Write a program to Input and display array. 

#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout <<"Enter the size of the array : " ;
    cin >> n ;
    int arr[n];
    cout<<"Enter the elements of the array " << endl ;

    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    cout << "The entered array is : ";
    for(int i=0 ; i<n ;i++){
        cout << arr[i] << " ";
    }

    return 0 ;
}