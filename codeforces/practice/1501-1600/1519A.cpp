// https://codeforces.com/contest/1519/problem/A

// 16-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long r, b, d;
        cin >> r >> b >> d;

        long long upper = min(r, b) * (1 + d);

        if (max(r, b) <= upper) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}