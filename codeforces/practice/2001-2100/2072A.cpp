// https://codeforces.com/contest/2072/problem/A

// 28-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (abs(k) % p == 0 && abs(k) / p <= n) {
            cout << abs(k) / p << endl;
        } else if (abs(k) % p != 0 && abs(k) / p <= n - 1) {
            cout << (abs(k) / p) + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}