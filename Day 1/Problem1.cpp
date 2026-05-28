//Write a program to calculate the sum of first N natural numbers.
#include <iostream>
using namespace std ; 
int main(){
    int n ;
    int sum=0 ;
    cout << "Enter the number till which the sum is required :- " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        sum+=i ;
    }
    cout << "The sum of first " << n << " natural numbers is :- " << sum ;
    return 0 ;
}