// https://codeforces.com/contest/1994/problem/A

// 30-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        if (n * m == 1) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> v;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                v.push_back(a[i][j]);
            }
        }

        int first = v[0];

        for (int i = 0; i < (int)v.size() - 1; i++) {
            v[i] = v[i + 1];
        }

        v.back() = first;

        int k = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << v[k++] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}