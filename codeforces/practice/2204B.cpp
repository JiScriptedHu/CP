// https://codeforces.com/contest/2204/problem/B
// 14-06-2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int mx = INT_MIN;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x >= mx) {
                mx = x;
                ans++;
            }
        }

        cout << ans << endl;
    }
}