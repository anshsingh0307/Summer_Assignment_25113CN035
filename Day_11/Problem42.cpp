// Write a program to Write function to find maximum. 

#include <iostream>
using namespace std ;

int maximum(int a , int b){
    return max(a,b);
}

int main() {
    int x , y ;
    cout << "Enter the two numbers : ";
    cin >> x >> y ;
    cout << "The maximum number is : " << maximum(x,y) ;
    return 0 ;
}