// https://codeforces.com/contest/14/problem/A

// 17-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = INT_MAX;
    int r = INT_MIN;
    int t = INT_MAX;
    int b = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '*') {
                t = min(t, i);
                b = max(b, i);
                l = min(l, j);
                r = max(r, j);
            }
        }
    }

    for (int i = t; i <= b; i++) {
        for (int j = l; j <= r; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}