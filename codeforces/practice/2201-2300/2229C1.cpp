// https://codeforces.com/contest/2229/problem/C1

// 14-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 0) {
                a[i] = 1;
            } else {
                a[i] = 0;
            }
        }

        int pos[n];
        int k = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != a[i + 1] && i < n - 1) {
                pos[k++] = i + 1;
            } else if (i == n - 1 && a[n - 1] == 1) {
                pos[k++] = i + 1;
            }
        }

        cout << k << endl;
        for (int i = 0; i < k; i++) {
            cout << pos[i] << " ";
        }
        cout << endl;
    }
}