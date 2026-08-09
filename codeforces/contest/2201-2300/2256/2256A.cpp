// https://codeforces.com/contest/2256/problem/A

// 09-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mn = max({a, b, c}) - min({a, b, c});

        mn = min(mn, max({b + c, b, c}) - min({b + c, b, c}));
        mn = min(mn, max({a, a + c, c}) - min({a, a + c, c}));
        mn = min(mn, max({a, b, a + b}) - min({a, b, a + b}));

        cout << mn << endl;
    }
}