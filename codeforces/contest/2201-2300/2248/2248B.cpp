// https://codeforces.com/contest/2248/problem/B

// 01-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);
        vector<long long> b(m);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        if (n < m * 2) {
            cout << "NO" << endl;
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (a[i] > b[i]) {
                ok = false;
                break;
            }

            if (a[n - m + i] < b[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}