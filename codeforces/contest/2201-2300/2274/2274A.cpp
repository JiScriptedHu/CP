// https://codeforces.com/contest/2274/problem/A

// 12-10-2026
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

        int pos = 2 * a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            pos -= 2 * (pos - a[i]);
        }
        cout << pos / 2 << '\n';
    }
}