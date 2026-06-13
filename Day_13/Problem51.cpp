// Write a program to Find largest and smallest element.

#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout << "Enter the size of the array : ";
    cin >> n ;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }
   
    int max = arr[0];
    for(int i=0 ; i<n ; i++){
        if(max<arr[i])
        max=arr[i];
    }

    int min=arr[0];
    for(int i=0 ; i<n ; i++){
        if(min>arr[i])
        min=arr[i];
    }

    cout << "The max element is : " << max << endl ;
    cout << "The min element is : " << min ;

    return 0 ;
}