// https://codeforces.com/contest/2117/problem/A

// 21-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int first = -1;
        int last = -1;

        for (int i = 0; i < n; i++) {
            int j;
            cin >> j;
            if (j == 1) {
                if (first == -1) {
                    first = i;
                    last = i;
                } else {
                    last = i;
                }
            }
        }

        if (last - first + 1 > x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}