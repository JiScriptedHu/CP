// https://codeforces.com/contest/1660/problem/B

// 14-10-2026
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

        if (n == 1) cout << (a[0] == 1 ? "YES" : "NO") << '\n';
        else {
            sort(a.begin(), a.end());
            cout << (a[n - 1] - a[n - 2] > 1 ? "NO" : "YES") << '\n';
        }
    }

    return 0;
}