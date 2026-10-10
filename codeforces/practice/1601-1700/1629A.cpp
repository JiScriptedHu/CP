// https://codeforces.com/contest/1629/problem/A

// 06-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int, int>> check(n);
        for (int i = 0; i < n; i++) {
            check[i].first = a[i];
            check[i].second = b[i];
        }
        sort(check.begin(), check.end());

        for (int i = 0; i < n; i++) {
            if (check[i].first <= k) {
                k += check[i].second;
            } else {
                break;
            }
        }

        cout << k << '\n';
    }

    return 0;
}