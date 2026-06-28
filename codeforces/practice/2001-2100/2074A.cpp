// https://codeforces.com/contest/2074/problem/A

// 28-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if (l == r && d == u && l == u) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}