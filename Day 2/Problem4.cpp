// Write a program to Check whether a number is palindrome.
#include<iostream>
using namespace std ; 
int main (){
    int n ; 
    int rev=0 ; 
    int r ;
    cout << "Enter the number : ";
    cin >> n ;
    int n1 = n; 
    while(n>0){
        r=n%10 ;
        rev=10*rev+r ;
        n=n/10 ;
    }
    if(rev==n1)
    cout << "The given number is palindrome ." ;

    else
    cout<<"The given number is not a palindrome .";

    return 0 ;
}
