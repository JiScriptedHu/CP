// https://codeforces.com/contest/1992/problem/B

// 11-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        sort(a.begin(), a.end());

        long long op = 0;
        for (int i = 0; i < k - 1; i++) {
            if (a[i] > 1) {
                op += (2 * a[i]) - 1;
            } else {
                op += a[i];
            }
        }

        cout << op << endl;
    }

    return 0;
}