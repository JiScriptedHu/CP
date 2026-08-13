// https://codeforces.com/contest/1950/problem/A

// 13-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b) {
            if (b < c) {
                cout << "STAIR" << endl;
                continue;
            } else if (b > c) {
                cout << "PEAK" << endl;
                continue;
            }
        }

        cout << "NONE" << endl;
    }

    return 0;
}