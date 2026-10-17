// https://codeforces.com/contest/2261/problem/B

// 17-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int M = *max_element(a.begin(), a.end());
        int mn = INT_MAX;

        for (int i = 0; i < n; i++) if (a[i] < M) mn = min(mn, a[i]);

        int ans = M;
        if (mn != INT_MAX) {
            for (int p = 31; p >= 0; p--) {
                if (!((M >> p) & 1)) continue;

                int low = (1LL << p) - 1;
                int y = (M ^ (1LL << p)) | low;

                if (y >= mn) {
                    ans = M | low;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
}