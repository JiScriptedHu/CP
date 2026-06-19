// https://codeforces.com/contest/2225/problem/A

// 11-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (y / x > 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}