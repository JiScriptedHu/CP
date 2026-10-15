// https://codeforces.com/contest/1675/problem/A

// 15-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        long long dg = max(x - a, (long long)0);
        long long ct = max(y - b, (long long)0);

        cout << (c >= (dg + ct) ? "YES" : "NO") << '\n';
    }

    return 0;
}