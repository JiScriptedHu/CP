// https://codeforces.com/contest/2158/problem/A

// 22-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, y, r;
        cin >> n >> y >> r;

        int y2 = y / 2;

        cout << min(n, (y2 + r)) << endl;
    }
}