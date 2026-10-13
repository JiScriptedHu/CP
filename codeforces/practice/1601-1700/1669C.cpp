// https://codeforces.com/contest/1669/problem/C

// 13-10-2026
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

        bool flag = true;
        for (int i = 2; i < n; i++) {
            if (a[i] % 2 != a[i % 2] % 2) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}