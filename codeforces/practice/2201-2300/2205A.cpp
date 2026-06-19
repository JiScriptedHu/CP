// https://codeforces.com/contest/2205/problem/A

// 14-06-2026
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

        int mx = 0;
        int pos = -1;

        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i]);

            if (mx == i + 1 && pos == -1) {
                pos = i;
            }
        }

        if (pos != n - 1) {
            swap(a[pos], a[n - 1]);
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
}