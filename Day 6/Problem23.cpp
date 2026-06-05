//Write a program to Count set bits in a number. 
#include <iostream>
using namespace std ;

int main() {
    int n ; 
    cout << "Enter the number : ";
    cin >> n;
    int count= 0 ;
    while(n>1){
        if(n%2==1) count+=1 ; 
        n=n/2 ;
    }
    if(n==1) count +=1 ;
    cout << count ; 
    return 0 ;
}