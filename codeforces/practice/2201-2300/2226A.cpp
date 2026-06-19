// https://codeforces.com/contest/2226/problem/A

// 11-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long cost = 0;
        long long x;

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x > 1) {
                cost += x;
            }

            if (i == n - 1 && x == 1) {
                cost++;
            }
        }

        cout << cost % 676767677 << endl;
    }
}