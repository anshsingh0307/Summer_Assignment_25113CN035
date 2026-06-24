// Write a program to Compress a string.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string compressed = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (i < s.length() - 1 && s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            compressed += s[i];
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << compressed;

    return 0;
}