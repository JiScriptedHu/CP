// https://codeforces.com/contest/1669/problem/B

// 01-10-2026
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

        sort(a.begin(), a.end());

        int ans = -1;
        for (int i = 0; i < n - 2; i++) {
            if (a[i] == a[i + 1] && a[i] == a[i + 2]) {
                ans = a[i];
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}