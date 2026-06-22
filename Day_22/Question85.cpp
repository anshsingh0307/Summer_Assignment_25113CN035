// Write a program to Check palindrome string.

#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int start = 0;
    int end = s.length() - 1;
    bool palindrome = true;

    while(start < end) {
        if(s[start] != s[end]) {
            palindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";
    return 0;
}