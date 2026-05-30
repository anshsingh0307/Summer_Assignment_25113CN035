// Write a program to Find sum of digits of a number.
#include<iostream>
using namespace std ;
int main(){
    int n ; 
    int sum = 0 ;
    int rem ;
    cout<<"Enter the number : ";
    cin >> n ;
    while(n>0){
        rem=n%10 ;
        sum=sum+rem ; 
        n=n/10 ;
    }
    cout << "The sum of the digits is : " << sum ;
}