// https://codeforces.com/problemset/problem/2208/A
// 800
// 15-06-2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int nSqr = n * n;

        int color[nSqr] = {0};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                color[x - 1] += 1;
            }
        }

        sort(color, color + nSqr, greater<int>());

        if (color[0] > (n * n) - n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}