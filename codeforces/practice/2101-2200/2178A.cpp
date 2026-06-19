// https://codeforces.com/contest/2178/problem/A

// 19-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'Y') count++;
        }

        if (count > 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}