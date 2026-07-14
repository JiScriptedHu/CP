// https://codeforces.com/contest/2244/problem/B

// 14-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool flag = true;
        long long extra = 0;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] + extra >= i + 1) {
                extra = (a[i] + extra) - (i + 1);
            } else {
                flag = false;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}