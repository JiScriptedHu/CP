// https://codeforces.com/contest/2237/problem/C

// 18-06-2026
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
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                a[i] += a[i + 1];
                swap(a[i], a[i + 1]);
            }
        }

        cout << a[n - 1] << endl;
    }
}