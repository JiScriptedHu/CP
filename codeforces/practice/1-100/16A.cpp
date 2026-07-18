// https://codeforces.com/contest/16/problem/A

// 18-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (a[i][j] != a[i][j + 1]) {
                flag = false;
                break;
            }
        }

        if (!flag) break;

        if (i > 0 && a[i][0] == a[i - 1][0]) {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}