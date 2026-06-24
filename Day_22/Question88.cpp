// Write a program to Remove spaces from string.

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ' ') {
            result += s[i];
        }
    }
    cout <<"String after removing spaces: " << result;
    return 0;
}