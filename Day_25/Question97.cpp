// Write a program to Merge two sorted arrays.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter number of elements in first array: ";
    cin >> m;

    vector<int> nums1(m);

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }

    cout << "Enter number of elements in second array: ";
    cin >> n;

    vector<int> nums2(n);

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }

    nums1.resize(m + n);

    for (int i = 0; i < n; i++)
    {
        nums1[m + i] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());

    cout << "Merged Array: ";
    for (int x : nums1)
    {
        cout << x << " ";
    }

    return 0;
}