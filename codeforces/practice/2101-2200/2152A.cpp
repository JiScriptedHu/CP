// https://codeforces.com/contest/2152/problem/A

// 20-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                count++;
            }
        }

        cout << (2 * count) + 1 << endl;
    }
}