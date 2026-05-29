// Write a program to Find product of digits.
#include<iostream>
using namespace std ;
int main(){
    int n ; 
    int r ;
    long long product =1 ;
    cout << "Enter the number : ";
    cin >> n ;
    while(n>0){
        r=n%10 ;
        product=product*r ;
        n=n/10 ;
    }
    cout << "The product of number is : " << product ; 
}