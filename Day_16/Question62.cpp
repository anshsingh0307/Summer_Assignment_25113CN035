// Write a program to Find maximum frequency element. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
       for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count>maxFreq) {
            maxFreq =count;
            maxElement=arr[i];
        }
    }

    cout <<"Maximum frequency element: " << maxElement << endl;
    cout <<"Frequency: " << maxFreq << endl;
    return 0;
}