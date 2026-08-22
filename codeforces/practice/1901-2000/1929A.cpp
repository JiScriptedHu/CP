// https://codeforces.com/contest/1929/problem/A

// 22-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        long long sum = 0;
        for (int i = 1; i < n; i++) {
            sum += a[i] - a[i - 1];
        }

        cout << sum << endl;
    }

    return 0;
}