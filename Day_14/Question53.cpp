// Write a program to Linear search. 

#include <iostream>
using namespace std ;

int main() {
    int n ;
    int result = -1 ;
    cout << "Enter the size of the array : " ;
    cin >> n ;
    int arr[n] ;
    cout << "Enter the elements of the array : ";

    for(int i=0 ; i <n ; i++){
        cin >> arr[i]; 
    }

    int target ;
    cout << "Enter the number to be searched : ";
    cin >> target ;

    for(int i=0 ; i<n ; i++){
        if(arr[i]==target)
        result = i ;
    }

    if(result!=-1)
    cout << "The element is present at index : " << result ;

    else
    cout << "Element not found .";
    return 0 ;
}