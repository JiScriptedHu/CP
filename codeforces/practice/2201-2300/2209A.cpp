// https://codeforces.com/contest/2209/problem/A

// 13-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, c, k;
        cin >> n >> c >> k;

        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 0; i < n; i++) {
            if (a[i] <= c) {
                c += a[i];
            }

            if (a[i] < c && k > 0) {
                long long diff = c - a[i] - a[i];
                c += min(k, diff);
                k -= min(k, diff);
            }
        }

        cout << c << endl;
    }
}