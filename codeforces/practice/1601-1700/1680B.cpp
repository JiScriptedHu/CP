// https://codeforces.com/contest/1680/problem/B

// 16-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int minx = 1e9, miny = 1e9;

        for (int x = 0; x < n; x++) {
            for (int y = 0; y < m; y++) {
                if (s[x][y] == 'R') {
                    minx = min(minx, x);
                    miny = min(miny, y);
                }
            }
        }

        cout << (s[minx][miny] == 'R' ? "YES" : "NO") << '\n';
    }

    return 0;
}