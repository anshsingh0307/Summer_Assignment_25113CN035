// Write a program to Intersection of arrays. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    set<int> s1, s2;

    for(int i=0; i<n1; i++) {
        int x;
        cin>>x;
        s1.insert(x);
    }

    cin >> n2;
    for(int i=0; i<n2; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    cout << "Intersection: ";

    for(int x : s1) {
        if(s2.find(x)!=s2.end()) {
            cout << x << " ";
        }
    }
    return 0;
}