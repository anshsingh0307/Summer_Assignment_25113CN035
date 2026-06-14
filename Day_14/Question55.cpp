// Write a program to Second largest element.

#include <iostream>
using namespace std ;

int main(){
   int n ;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest=arr[0];
    for(int i=0 ; i<n ; i++){
        if(largest < arr[i])
        largest=arr[i];
    }


    int secondLargest=arr[0];
    for(int i=0 ; i<n ; i++){
        if(secondLargest<arr[i] && arr[i]!=largest)
        secondLargest=arr[i];
    }

    cout << "The second largest element is : " << secondLargest ;
    return 0 ;
}