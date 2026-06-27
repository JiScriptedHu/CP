// https://codeforces.com/contest/2044/problem/C

// 27-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int seated = 0;
        int m2x = 2 * m;

        if (m < a) {
            seated += m;
        } else {
            seated += a;
        }

        if (m < b) {
            seated += m;
        } else {
            seated += b;
        }

        if (seated == m2x) {
            cout << seated << endl;
            continue;
        }

        if ((m2x - seated) < c) {
            seated = m2x;
        } else {
            seated += c;
        }

        cout << seated << endl;
    }
}