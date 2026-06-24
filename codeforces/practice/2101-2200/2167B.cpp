// https://codeforces.com/contest/2167/problem/B

// 24-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if (s == t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}