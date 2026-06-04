//Write a program to Check strong number.
// A Strong Number is a number whose value is equal to the sum of the factorials of its digits.
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cout << "Enter the number : ";
    cin >> n ;
    int sum = 0 ;
    int rem ;
    int originalNumber=n ;
    while(n>0){
        long long fact=1 ;
        rem=n%10 ;
        for(int j= 1 ; j<=rem ; j++){
            fact=fact*j ;
        }
        sum+=fact ;
        n=n/10 ;
    }
    if(sum==originalNumber)
    cout<< originalNumber << " is a strong number .";

    else
    cout << originalNumber << " is not a strong number .";

    return 0 ;
}