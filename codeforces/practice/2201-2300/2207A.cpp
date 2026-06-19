// https://codeforces.com/contest/2207/problem/A

// 16-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ones = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
        }

        int access = 0;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1') {
                access++;
                s[i] = '1';
            }
        }
        int mx = ones + access;

        access = 0;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '1' && s[i - 1] == '1' && s[i + 1] == '1') {
                access++;
                s[i] = '0';
            }
        }
        int mn = mx - access;

        cout << mn << " " << mx << endl;
    }
}