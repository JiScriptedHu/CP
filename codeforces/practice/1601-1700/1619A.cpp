// https://codeforces.com/contest/1619/problem/A

// 07-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        if (n % 2) {
            cout << "NO" << '\n';
            continue;
        } else n /= 2;

        cout << (s.compare(0, n, s, n, n) == 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}