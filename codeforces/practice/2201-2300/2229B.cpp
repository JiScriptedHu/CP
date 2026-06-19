// https://codeforces.com/contest/2229/problem/B

// 11-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
            }
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += b[i];
        }

        sort(a, a + n);
        sum += a[n-1];

        cout << sum << endl;
    }
}