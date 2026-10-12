// https://codeforces.com/contest/1686/problem/A

// 12-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (a[i] * (n - 1) == sum - a[i]) {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}