//Write a program to Count digits in a number .
#include<iostream>
using namespace std ;
int main (){
    int n ;
    int n1 ;
    int count = 0;
    cout << " Enter the number : ";
    cin >> n ;
    n1=n ;
    while (n>0){
        n=n/10 ;
        count ++ ;
    }
    cout << "The number of digits in " << n1 << " is : " << count ; 
}