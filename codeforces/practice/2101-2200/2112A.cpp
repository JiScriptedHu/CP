// https://codeforces.com/contest/2112/problem/A

// 21-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;

        if ((a < x && a < y) || (a > x && a > y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}