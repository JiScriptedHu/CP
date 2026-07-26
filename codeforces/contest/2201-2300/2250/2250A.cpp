// https://codeforces.com/contest/2250/problem/A

// 26-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long minOdd = LLONG_MAX;
        long long maxEven = LLONG_MIN;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            if (i & 1) {
                minOdd = min(minOdd, x);
            } else {
                maxEven = max(maxEven, x);
            }
        }

        if (n % 2 != 0) {
            cout << "NO" << endl;
        } else if (minOdd - maxEven > 1) {
            cout << "YES" << endl;;
        } else {
            cout << "NO" << endl;
        }
    }
}