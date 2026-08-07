// https://codeforces.com/contest/1999/problem/C

// 06-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, s, m;
        cin >> n >> s >> m;

        vector<long long> l(n), r(n);
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

        long long cur = 0;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            if (l[i] - cur >= s) {
                flag = true;
                break;
            }

            cur = r[i];
        }

        if (!flag && m - cur >= s) {
            flag = true;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}