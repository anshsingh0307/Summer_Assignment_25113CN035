// Write a program to Reverse a string. 

#include <iostream>
using namespace std ;

int main() {
    string s;
    cout << "enter the string : ";
    getline(cin , s);

    cout << "The reversed string is : "; 
    for(int i=s.length() ; i>=0 ; i--){
        cout << s[i];
    }
    return 0 ;
}