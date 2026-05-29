//Write a program to Reverse a number.
#include<iostream>
using namespace std ;
int main(){
    int n ; 
    int rev=0 ;
    int r ;
    cout << "Enter the number : ";
    cin >> n ;
    int n1 = n ;
    while(n>0){
        r=n%10 ;
        rev=(10*rev)+r ;
        n=n/10 ;
    }
    cout << "The reverse of number " << n1 << " is : " << rev ;
    return 0;
}