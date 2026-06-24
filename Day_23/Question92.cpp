// Write a program to Find maximum occurring character.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    char maxChar;
    int maxFreq = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] > maxFreq)
        {
            maxFreq = freq[s[i]];
            maxChar = s[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}