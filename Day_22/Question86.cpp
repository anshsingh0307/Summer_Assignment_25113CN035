// Write a program to Count words in a sentence.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int words = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            words++;
        }
    }
    cout << "Number of words = " << words + 1;
    return 0;
}

