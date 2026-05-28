//Write a program to Find factorial of a number .
#include<iostream>
using namespace std ;
int main (){
    int n ;
    int factorial=1;
    cout << "Enter the number n : ";
    cin >> n ;
    for(int i= 1 ; i<=n ; i++){
        factorial=factorial*i ;
    }
    cout << "The factorial of " << n << " is : " << factorial ;
    return 0; 
}