// https://codeforces.com/contest/2274/problem/B

// 12-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long lo = a[0], hi = a[0], ans = a[0];
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] + max(llabs(lo), llabs(hi)));
            long long nlo = min({a[i], a[i] + 2 * lo, a[i] + 2 * hi});
            long long nhi = max({a[i], a[i] + 2 * lo, a[i] + 2 * hi});
            lo = nlo;
            hi = nhi;
        }
        cout << ans << '\n';
    }
}