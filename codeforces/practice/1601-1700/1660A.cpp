// https://codeforces.com/contest/1660/problem/A

// 11-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == 0) cout << 1 << '\n';
        else cout << a + (b * 2) + 1 << '\n';
    }

    return 0;
}