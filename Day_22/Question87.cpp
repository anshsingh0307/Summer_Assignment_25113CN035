// Write a program to Character frequency.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter character to find frequency: ";
    cin >> ch;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ch) {
            count++;
        }
    }
    cout << "Frequency of '" << ch << "' = " << count;

    return 0;
}