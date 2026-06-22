// Write a program to Find string length without strlen(). 

#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s ;
    cout << "Enter the string : ";
    getline(cin ,s );
    int i=0 ;
    int count = 0 ;
    while(s[i]!='\0'){
        count ++ ;
        i++ ;
    }
    cout << "The length of given string is : " << count  ; 
}