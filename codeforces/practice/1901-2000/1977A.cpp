// https://codeforces.com/contest/1977/problem/A

// 11-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (n < m) {
            cout << "NO" << endl;
            continue;
        }

        cout << ((n - m) % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}