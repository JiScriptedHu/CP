// https://codeforces.com/contest/1676/problem/B

// 08-10-2026
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

        int sum = 0;
        for (int i = 1; i < n; i++) sum += a[i] - a[0];

        cout << sum << '\n';
    }

    return 0;
}