// https://codeforces.com/contest/2241/problem/A

// 30-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x % y == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}