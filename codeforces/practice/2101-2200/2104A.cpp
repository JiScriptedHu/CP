// https://codeforces.com/contest/2104/problem/A

// 27-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c) % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int avg = (a + b + c) / 3;

        if (a < avg && b <= avg && c > avg) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}