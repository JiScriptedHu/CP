// https://codeforces.com/contest/1974/problem/A

// 10-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int screens = (y + 1) / 2;

        int remaining = 15 * screens - 4 * y;

        if (x > remaining) {
            screens += (x - remaining + 14) / 15;
        }

        cout << screens << endl;
    }

    return 0;
}