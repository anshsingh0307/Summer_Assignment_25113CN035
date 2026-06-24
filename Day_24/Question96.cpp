// Write a program to Remove duplicate characters.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};
    string result = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 0)
        {
            result += s[i];
            freq[s[i]]++;
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}