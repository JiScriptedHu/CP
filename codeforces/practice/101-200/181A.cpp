// https://codeforces.com/contest/181/problem/A

// 02-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '*') {
                v.push_back({i + 1, j + 1});
            }
        }
    }

    int x, y;

    if (v[0].first == v[1].first) {
        x = v[2].first;
    } else if (v[0].first == v[2].first) {
        x = v[1].first;
    } else {
        x = v[0].first;
    }

    if (v[0].second == v[1].second) {
        y = v[2].second;
    } else if (v[0].second == v[2].second) {
        y = v[1].second;
    } else {
        y = v[0].second;
    }
    
    cout << x << " " << y << endl;
    return 0;
}