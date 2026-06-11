//Write a program to Write function to find sum  of two numbers. 

#include <iostream>
using namespace std ;

int sum(int a , int b){
    return a +b ;
}

int main() {
    int x , y ;
    cout << "Enter the numbers whose sum is required : ";
    cin >> x >> y ;
    cout << "The sum of " << x << " and " << y << " is : " << sum(x,y) ;
    return 0 ;
}