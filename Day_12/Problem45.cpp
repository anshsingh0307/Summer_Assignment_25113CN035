// Write a program to Write function for palindrome. 

#include <iostream>
using namespace std ;

bool palindrome(int n){
    int rev=0 ;
    int r ;
    int n1=n ;
    while(n>0){
        r=n%10 ;
        rev=10*rev+r ;
        n=n/10 ;
    }
    if(n1==rev)
    return true ;

    else
    return false ;
}

int main() {
    int x ;
    cout << "Enter a number : ";
    cin >> x ;
    if (palindrome(x))
    cout << "The number is palindrome .";

    else
    cout << "The number is not palindrome ." ;
    return 0 ;
}