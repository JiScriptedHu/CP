// https://codeforces.com/contest/2211/problem/A

// 15-06-2026
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
            a[i] = i + 1;
        }

        int b[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            if (n < 2) {
                cout << n << " ";
            } else {
                cout << 2 << " ";
            }
        }

        cout << endl;
    }
}