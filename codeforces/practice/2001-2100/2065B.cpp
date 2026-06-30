// https://codeforces.com/contest/2065/problem/B

// 30-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << 1 << endl;
        } else {
            cout << n << endl;
        }
    }
}