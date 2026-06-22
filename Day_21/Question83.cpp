// Write a program to Count vowels and consonants.

#include <bits/stdc++.h>
using namespace std ;

int main() {
    string s ;
    cout << "Enter the string : ";
    getline (cin , s);
    int count1 = 0; 
    int count2=0 ;

    for(int i= 0 ; i<s.length() ; i++){
        char ch=s[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        count1++ ;


        else
        count2++ ;
    }

    cout << "The number of vowels are : "<< count1 << endl ;
    cout << "The number of consonants are : "<< count2 ;
    return 0 ;
}