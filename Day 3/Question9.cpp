// Write a program to Check whether a number is prime.
#include <iostream>
using namespace std ;
int main(){
    int n ; int count=0 ;
    cout<<"Enter the number : " ;
    cin>>n ;
    for(int i=2 ; i<=n/2 ; i++){
        if(n%i==0)
        count++ ;
    } 
    if(count==0)
    cout << "The number is a prime number ." ;
    else
    cout << "The number is not a prime number . " ; 
}
